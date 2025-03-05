#include <iostream>
#include <vector>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, x;
        cin >> n >> x;
        vector<long> v(n);
        long cx = 0;

        for (size_t p = 0; p < n; p++) {
            cx |= p;
            if ((cx | x) > x) {
                break;
            }
            v[p] = p;
        }

        if (cx != x) {
            v.back() = x;
        }

        for (size_t p = 0; p < n; p++) {
            cout << v[p] << " ";
        }
        cout << endl;
    }

    return 0;
}
