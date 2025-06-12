#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int original = num;

    // 拆位：百位、十位、個位
    int a = num / 100;           // 百位
    int b = (num / 10) % 10;     // 十位
    int c = num % 10;            // 個位

    int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

    if (sum == original)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
