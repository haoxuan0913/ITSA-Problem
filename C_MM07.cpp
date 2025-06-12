#include <iostream>
using namespace std;

int main() {
    int n;
    // 持續讀取整數直到輸入結束（EOF）
    while (cin >> n) {
        int square = n * n;
        int cube = n * n * n;
        cout << n << " " << square << " " << cube << endl;
    }
    return 0;
}
