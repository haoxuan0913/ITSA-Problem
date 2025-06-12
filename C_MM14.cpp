#include <iostream>
using namespace std;

// 定義符號常數
const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

int main() {
    int total_seconds;
    cin >> total_seconds;

    // 計算一天的總秒數
    const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;
    const int SECONDS_PER_DAY = SECONDS_PER_HOUR * HOURS_PER_DAY;

    // 計算天數
    int days = total_seconds / SECONDS_PER_DAY;
    int remainder = total_seconds % SECONDS_PER_DAY;

    // 計算小時數
    int hours = remainder / SECONDS_PER_HOUR;
    remainder = remainder % SECONDS_PER_HOUR;

    // 計算分鐘數
    int minutes = remainder / SECONDS_PER_MINUTE;

    // 計算秒數
    int seconds = remainder % SECONDS_PER_MINUTE;

    // 輸出結果
    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
