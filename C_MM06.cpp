#include <iostream>
#include <cmath>    // 用於 round()
#include <iomanip>  // 用於設定輸出格式

using namespace std;

int main() {
    int miles;
    while (cin >> miles) {  // 可連續輸入多組資料，直到 EOF
        double km = miles * 1.6;

        // 四捨五入到小數點第一位
        double rounded_km = round(km * 10) / 10.0;

        cout << fixed << setprecision(1) << rounded_km << endl;
    }

    return 0;
}
