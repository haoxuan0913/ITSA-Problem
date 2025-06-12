#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n; // 讀入 m 個段落（segments）與總選擇限制 n（最大可選總數）

    vector<int> segments(m); // 儲存每個段落有多少個項目
    for (int i = 0; i < m; ++i) {
        cin >> segments[i]; // 讀入每個段落的項目數
    }

    vector<vector<int>> prefix(m); // 儲存每段的 prefix sum（前綴和）資訊
    for (int i = 0; i < m; ++i) {
        prefix[i].resize(segments[i] + 1, 0); // 每段從 index 1 開始，0 留給 base case
        for (int j = 1; j <= segments[i]; ++j) {
            cin >> prefix[i][j]; // 讀入每段的第 j 個項目值
            prefix[i][j] += prefix[i][j-1]; // 計算前綴和（prefix sum）
        }
    }

    // 動態規劃表 dp[i][j] 表示前 i 段中選擇總共 j 個項目可獲得的最大總值
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i) { // 第 i 段（1-based）
        for (int j = 0; j <= n; ++j) { // 已選的總數 j
            dp[i][j] = dp[i-1][j]; // 不選第 i 段，沿用上一層的值
            int max_k = min(j, segments[i-1]); // 最多能從第 i 段選多少項目
            for (int k = 1; k <= max_k; ++k) {
                if (j >= k) {
                    // 嘗試選 k 個項目：取前 i-1 段用掉 j-k 個空間的最佳值，加上這段的 prefix sum
                    dp[i][j] = max(dp[i][j], dp[i-1][j - k] + prefix[i-1][k]);
                }
            }
        }
    }

    cout << dp[m][n] << endl; // 輸出總共選 n 個項目時的最大總和

    // 回溯（Backtrack）找出實際選了哪些段落及其項目數
    vector<pair<int, int>> selected;
    int remaining = n;
    for (int i = m; i >= 1; --i) {
        if (remaining <= 0) break; // 沒有可選的剩餘名額
        bool found = false;
        for (int k = min(remaining, segments[i-1]); k >= 0; --k) {
            // 如果當前 dp 值等於選 k 個的情況，表示這次是選了 k 個
            if (dp[i][remaining] == dp[i-1][remaining - k] + prefix[i-1][k]) {
                if (k > 0) {
                    selected.emplace_back(i, k); // 紀錄選了第 i 段 k 個項目
                }
                remaining -= k; // 更新剩餘名額
                found = true;
                break;
            }
        }
        if (!found && dp[i][remaining] == dp[i-1][remaining]) {
            continue; // 沒選這段，進下一段
        }
    }

    // 輸出所選段落與其選項目數，依段落順序排列
    sort(selected.begin(), selected.end());
    for (int i = 0; i < selected.size(); ++i) {
        if (i != 0) cout << " ";
        cout << "(" << selected[i].first << "," << selected[i].second << ")";
    }
    cout << endl;

    return 0;
}
