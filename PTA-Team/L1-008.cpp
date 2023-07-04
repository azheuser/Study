#include<iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int a = A, b = B;
    int count = 1;

    for(int i = A; i <= B; i++, count++) {
        printf("%5d", A++);
        if(count % 5 == 0) {
            if(count != b - a + 1) {
                cout << endl;
            }
        }
    }
    cout << endl;
    int X = (a + b) * (b - a + 1) / 2;

    cout << "Sum = " << X << endl;

    return 0;
}
