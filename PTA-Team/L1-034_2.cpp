#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int N, K, F;
vector<int> vi, viu;

int main() {
    cin >> N;
    for (int i{0}; i < N; i++) {
        cin >> K;
        for (int j{0}; j < K; j++) {
            cin >> F;
            vi.emplace_back(F);
        }
    }

    sort(vi.begin(), vi.end());
    viu = vi;  // 浅拷贝
    viu.erase(unique(viu.begin(), viu.end()), viu.end());

    auto max_cnt = 0;
    auto max_num = viu.at(0);
    for (auto i : viu) {
        int tmp = count(vi.begin(), vi.end(), i);
        if (tmp >= max_cnt) {
            max_cnt = tmp;
            max_num = i;
        }
    }

    cout << max_num << " " << max_cnt;

    return 0;
}