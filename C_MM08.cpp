#include <iostream>
using namespace std;

int main() {
    int a, b;
    // 持續讀取兩個整數直到輸入結束（EOF）
    while (cin >> a >> b) {
        int sum = a + b;
        int square = sum * sum;
        cout << square << endl;
    }
    return 0;
}
