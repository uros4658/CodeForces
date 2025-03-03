#include <iostream>

using namespace std;

signed int main() {
    string s, rez = "";
    cin >> s;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            rez += '.';
            rez += c;
        }
    }

    cout << rez << endl;
    return 0;
}
