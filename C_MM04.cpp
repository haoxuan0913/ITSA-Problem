#include <iostream>
#include <cstdlib>  // abs()
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;

    if (b == 0) {
        cout << "除數不可為0" << endl;
    } else {
        int quotient = a / b;
        int remainder = a % b;

        // 調整餘數為非負數，並修正商
        if (remainder < 0) {
            remainder += abs(b);
            quotient -= (b > 0) ? 1 : -1;
        }

        cout << a << "/" << b << "=" << quotient << "..." << remainder << endl;
    }

    return 0;
}
