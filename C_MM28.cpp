#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // 讀入正整數 N

    bool found = false; // 判斷是否有印過東西

    for (int i = 1; i <= N; ++i) {
        if (i % 5 == 0 && i % 7 == 0) {
            if (found) cout << " "; // 控制空格輸出格式
            cout << i;
            found = true;
        }
    }

    cout << endl;
    return 0;
}
