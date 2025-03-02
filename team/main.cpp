#include <iostream>

using namespace std;

signed int main() {
    int n, brojac = 0;

    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b+c >= 2) {
            brojac++;
        }
    }

    cout << brojac << endl;

    return 0;
}