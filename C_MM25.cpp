#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 3; i <= N; i += 3) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
