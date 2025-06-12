#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false; // 小於 2 一律不是質數
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
