#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count10 = N / 10;      // 10元硬幣數量
    int remainder = N % 10;

    int count5 = remainder / 5; // 5元硬幣數量
    remainder = remainder % 5;

    int count1 = remainder;     // 1元硬幣數量

    cout << "NT10=" << count10 << endl;
    cout << "NT5=" << count5 << endl;
    cout << "NT1=" << count1 << endl;

    return 0;
}
