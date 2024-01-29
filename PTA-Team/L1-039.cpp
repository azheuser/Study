#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    string instr;
    cin >> N;
    cin.ignore();
    getline(cin, instr);
    //	cout << N << endl << instr << endl;
    int flag = instr.size() % N;
    if (flag != 0) {
        for (int i = 0; i < N - flag; i++) {
            instr.append(" ");
        }
    }
    vector<list<char>> vlc;
    vlc.reserve(N);
    list<char> tmp;
    for (int i = 0; i < N; i++) {
        vlc.push_back(tmp);
    }
    //	cout << vlc.capacity() << endl;

    int cnt = 0;
    for (auto s : instr) {
        vlc.at(cnt).push_front(s);
        cnt++;
        if (cnt == N) {
            cnt = 0;
        }
    }

    for (int i2 = 0; i2 < N; i2++) {
        for (auto i : vlc.at(i2)) {
            cout << i;
        }
        if (N - i2 != 1) {
            cout << endl;
        }
    }

    return 0;
}
