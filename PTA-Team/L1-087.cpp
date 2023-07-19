#include <iostream>
#include <set>

using namespace std;

int main() {
    int N, M, Q, T, C;
    set<int> row_T0, col_T1;

    cin >> N >> M >> Q;
    for (int i{0}; i < Q; i++) {
        cin >> T >> C;
        if (T == 0) {
            row_T0.insert(C);
        } else if (T == 1) {
            col_T1.insert(C);
        }
    }

    cout << (N - row_T0.size()) * (M - col_T1.size());

    return 0;
}
