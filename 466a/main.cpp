#include <algorithm>
#include <iostream>
using namespace std;

signed int main() {
    int n,m,a,b;

    cin >> n >> m >> a >> b;
    cout << min(n / m * b + n % m * a,min(n * a, ((n + m - 1) / m) * b)) << endl;

    return 0;
}