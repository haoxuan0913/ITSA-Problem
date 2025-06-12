#include <iostream>
using namespace std;

int main() {
    int sh, sm, eh, em;
    cin >> sh >> sm;
    cin >> eh >> em;

    // 將時間轉換成分鐘
    int start = sh * 60 + sm;
    int end = eh * 60 + em;

    // 確保停車時間不超過當天晚上12點（1440分鐘）
    if (end > 1440) end = 1440;

    int total_minutes = end - start;
    if (total_minutes <= 0) {
        cout << 0 << endl;
        return 0;
    }

    // 計算半小時數，未滿半小時不計費
    int half_hours = total_minutes / 30;

    int fee = 0;

    // 前4個半小時(2小時內)
    int first = (half_hours > 4) ? 4 : half_hours;
    fee += first * 30;

    // 接下來4個半小時(2~4小時)
    int second = (half_hours > 8) ? 4 : (half_hours - 4);
    if (second < 0) second = 0;
    fee += second * 40;

    // 超過4小時以上的半小時數
    int third = half_hours - 8;
    if (third < 0) third = 0;
    fee += third * 60;

    cout << fee << endl;

    return 0;
}
