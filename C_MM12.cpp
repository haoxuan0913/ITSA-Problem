#include <iostream>
#include <cmath>  // ceil()

using namespace std;

int main() {
    int D;
    while (cin >> D) {
        double relative_speed = 1.0 - 30 * 0.0254;  // 1 - 小華速度(公尺/秒)
        double time = D / relative_speed;

        // 無條件進入法：向上取整
        int seconds = static_cast<int>(ceil(time));

        cout << seconds << endl;
    }
    return 0;
}
