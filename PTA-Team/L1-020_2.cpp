#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N, K, M;
    cin >> N;
    set<string> ss, out;
    string str;
    for (int i1{0}; i1 < N; i1++) {
        cin >> K;
        for (int i2{0}; i2 < K; i2++) {
            cin >> str;
            if (K > 1) {
                ss.insert(str);
            }
        }
    }
    cin >> M;
    int flag = 0;
    for (int i3{0}; i3 < M; i3++) {
        cin >> str;
        if (ss.find(str) == ss.end() && out.find(str) == out.end()) {
            out.insert(str);
            if (flag == 1) {
                cout << " ";
            }
            cout << str;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "No one is handsome";
    }

    return 0;
}