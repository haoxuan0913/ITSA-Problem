#include <iostream>
#include <iomanip> // 用于控制输出格式

using namespace std;

int main() {
    int base, height;
    cin >> base >> height;
    double area = (static_cast<double>(base) * height) / 2.0;
    cout << fixed << setprecision(1) << area << endl;
    return 0;
}