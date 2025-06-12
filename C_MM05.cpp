#include <iostream>
#include <cmath>    // 用於 round()
#include <iomanip>  // 用於設定輸出格式

using namespace std;

int main() {
    double side;
    cin >> side;

    if (side <= 0) {
        cout << "邊長必須大於零" << endl;
        return 1; // 非正常結束
    }

    double area = side * side;

    // 四捨五入到小數點第一位
    // 方法一：使用 round(area * 10) / 10.0
    double rounded_area = round(area * 10) / 10.0;

    // 輸出，固定顯示一位小數
    cout << fixed << setprecision(1) << rounded_area << endl;

    return 0;
}
