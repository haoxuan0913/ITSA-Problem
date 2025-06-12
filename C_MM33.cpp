#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool first = true;

    for (int i = 2; i <= N; ++i) {
        int sum = 1;
        int sqrt_i = sqrt(i);

        for (int j = 2; j <= sqrt_i; ++j) {
            if (i % j == 0) {
                sum += j;
                if (j != i / j) {
                    sum += i / j;
                }
            }
        }

        if (sum == i) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }

    cout << endl;
    return 0;
}
