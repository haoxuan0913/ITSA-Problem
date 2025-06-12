#include <iostream>
#include <iomanip> // 用於控制輸出格式

using namespace std;

double calculatePhoneBill(int minutes) {
    const double rate = 0.9; // 每分鐘基本費率
    double total = minutes * rate;
    
    if (minutes >= 1500) {
        total *= 0.79; // 1500分鐘以上79折
    } else if (minutes > 800) {
        total *= 0.9; // 800-1500分鐘9折
    }
    // 800分鐘以下不折扣
    
    return total;
}

int main() {
    int minutes;
    cin >> minutes;
    
    double bill = calculatePhoneBill(minutes);
    
    // 設定輸出格式，固定小數點，保留一位小數
    cout << fixed << setprecision(1);
    cout << bill << endl;
    
    return 0;
}