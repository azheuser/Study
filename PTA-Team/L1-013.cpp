#include <iostream>

using namespace std;

int jiecheng(int n);

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += jiecheng(i);
    }
    cout << sum;
    return 0;
}

int jiecheng(int n) {
    int result = 1;
    for(int i = n; i > 1; i--) {
        result *= i;
    }
    return result;
}
