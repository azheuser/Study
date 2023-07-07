#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Data {
   public:
    int num = 0;
    int cnt = 1;
    Data(int _num = 0) : num{_num} {};
    bool operator==(const int& num) {
        if (this->num == num) {
            return true;
        }
        return false;
    }
    bool operator<(const Data& a) {
        if (this->num < a.num) {
            return true;
        }
        return false;
    }
};

int N, K, F;
vector<Data> vd;
int main(int argc, char const* argv[]) {
    cin >> N;
    while (N--) {
        cin >> K;
        while (K--) {
            cin >> F;
            auto last = find(vd.begin(), vd.end(), F);
            if (last == vd.end()) {
                vd.push_back(F);
            } else {
                last->cnt++;
            }
        }
    }

    sort(vd.begin(), vd.end());
    int max_num = vd.at(0).num;
    int max_cnt = vd.at(0).cnt;
    for (auto i : vd) {
        if (i.cnt >= max_cnt) {
            max_num = i.num;
            max_cnt = i.cnt;
        }
    }
    cout << max_num << " " << max_cnt;

    return 0;
}
