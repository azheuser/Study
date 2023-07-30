#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a{0}, b{0};
    cin >> a >> b;

    if (b == 0) {
        cout << a << "/" << b << "=Error";
        return 0;
    }

    string B;
    if (b < 0) {
        B = "/(" + to_string(b) + ")";
    } else {
        B = "/" + to_string(b);
    }
    cout << a << B << "=";
    cout << fixed << setprecision(2) << a / (double)b;

    return 0;
}
