#include<iostream>
#include<string>

using namespace std;

int quanzong[17] = {
7, 9, 10, 5, 8,
4, 2, 1, 6, 3,
7, 9, 10, 5, 8,
4, 2};

string M = "10X98765432";

bool is17ID(string str);

int qzsum(string str);

int N{0}; // �д��������

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string tmp;
    int sum[n] = {0}; // ��Ȩ�غ�
    string str[n];

    // �����ַ�����ǰ17λ��ȷ��sum
    for(int i = 0; i < n; i++) {
        getline(cin, str[i]);
        if(is17ID(str[i])) {
            sum[i] = qzsum(str[i]);
        }
        else {
            sum[i] = -1;
        }
    }

    for(int i = 0; i < n; i++) {
        if(sum[i] != -1) {
            if(M[sum[i] % 11] == str[i].back()) {
                str[i] = "0";
            }
            else {
                N++;
            }
        }
    }

    if(N != 0) {
        for(int i = 0; i < n; i++) {
            if(str[i] != "0") {
                cout << str[i];
                if(i != n - 1) {
                    cout << endl;
                }
            }
        }
    }
    else {
        cout << "All passed";
    }

    return 0;
}

bool is17ID(string str) {
    for(int i = 0; i < 17; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            continue;
        }
        else {
            N++;
            return false;
        }
    }

    return true;
}

int qzsum(string str) {
    int sum = 0;
    for(int i = 0; i < 17; i++) {
        int tmp = str[i] - '0';
        sum += tmp * quanzong[i];
    }
    return sum;
}
