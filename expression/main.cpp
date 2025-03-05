#include <iostream>

using namespace std;

signed int main() {

    int a,b,c;

    cin >> a >> b >> c;

    int result = max(a + b + c,
                          max(a * b * c,
                          max((a + b) * c,
                          a * (b + c))));

    cout << result << endl;

    return 0;
}

