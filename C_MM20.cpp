#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string decimalToHex(int n) {
    if (n == 0) return "0";
    
    string hex;
    while (n > 0) {
        int rem = n % 16;
        if (rem < 10) {
            hex += ('0' + rem);
        } else {
            hex += ('A' + rem - 10);
        }
        n /= 16;
    }
    reverse(hex.begin(), hex.end());
    return hex;
}

int main() {
    int decimal;
    cin >> decimal;
    
    cout << decimalToHex(decimal) << endl;
    
    return 0;
}