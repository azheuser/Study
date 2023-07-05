#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
    int num;
    cin >> num;
    long long powernum = (long long)pow(2, num);
    cout << "2^" << num << " = " << powernum;

    return 0;
}
