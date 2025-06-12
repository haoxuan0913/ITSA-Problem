#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 6 == 0 && i % 12 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
