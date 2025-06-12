#include <iostream>
#include <cmath>    // round()
#include <iomanip>  // fixed, setprecision

using namespace std;

int main() {
    double c;
    while (cin >> c) {
        double f = (9.0 / 5.0) * c + 32;
        // 四捨五入到小數點第一位
        double rounded_f = round(f * 10) / 10.0;

        // 輸出固定一位小數
        cout << fixed << setprecision(1) << rounded_f << endl;
    }
    return 0;
}
