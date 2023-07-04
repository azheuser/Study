#include<bits/stdc++.h>

class PTA {
  public:
    long long _a;
    int _b;
    int _c;
  public:
    PTA()
    : _a(0), _b(0), _c(0) {
    }

    PTA(long long a, int b, int c)
    : _a(a), _b(b), _c(c) {
    }

    friend std::istream& operator>>(std::istream& is, PTA& pta) {
        is >> pta._a >> pta._b >> pta._c;
        return is;
    }
};

void find_c(int index, PTA pta) {
    if(index == pta._b) {
        std::cout << pta._a << " " << pta._c << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;
    PTA pta[N];
    for(int i = 0; i < N; i++) {
        std::cin >> pta[i];
    }
//	std::cout << pta[0]._a;
    int M;
    std::cin >> M;
    int input_num[M];
    for(int i = 0; i < M; i++) {
        std::cin >> input_num[i];
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            find_c(input_num[i], pta[j]);
        }
    }

}
