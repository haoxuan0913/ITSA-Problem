#include <iostream>
using namespace std;

int main() {
    int x, y;
    // 持續讀取輸入直到結束
    while (cin >> x >> y) {
        // 判斷點是否在範圍內（包含邊界）
        if (x >= 0 && x <= 100 && y >= 0 && y <= 100) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }
    return 0;
}
