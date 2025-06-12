#include <iostream>
using namespace std;

int main() {
    int year;

    // 一直讀取直到輸入結束（可輸入多個年份）
    while (cin >> year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "Bissextile Year" << endl;
        } else {
            cout << "Common Year" << endl;
        }
    }

    return 0;
}
