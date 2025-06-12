#include <iostream>
using namespace std;

// 判斷是否為質數
bool isPrime(int num) {
    if (num < 2) return false;  // 0 和 1 都不是質數
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = N - 1; i >= 2; --i) {
        if (isPrime(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
