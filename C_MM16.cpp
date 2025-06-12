#include <iostream>
using namespace std;

int main() {
    int x, y;
    const int radius = 100;
    const int radiusSquared = radius * radius;

    // 持續讀取輸入直到結束
    while (cin >> x >> y) {
        int distSquared = x * x + y * y;
        if (distSquared <= radiusSquared) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }
    return 0;
}
