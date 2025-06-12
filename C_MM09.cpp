#include <iostream>
using namespace std;

int main() {
    int i;
    while (cin >> i) {
        if (i > 31) {
            cout << "Value of more than 31" << endl;
        } else if (i >= 0) {
            // 使用位移運算元計算 2^i，1 << i 表示 1 左移 i 位
            int result = 1 << i;
            cout << result << endl;
        } else {
            // 若輸入負數，依需求可忽略或提示錯誤，這裡不處理
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}
