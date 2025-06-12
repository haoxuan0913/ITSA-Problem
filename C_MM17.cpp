#include <iostream>
using namespace std;

// 函式：計算兩數最大公因數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    cin >> x >> y;

    // 輸出最大公因數
    cout << gcd(x, y) << endl;

    return 0;
}
