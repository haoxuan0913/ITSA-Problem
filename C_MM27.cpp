#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int start = min(a, b);
    int end = max(a, b);
    int sum = 0;

    for (int i = start; i <= end; ++i) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
