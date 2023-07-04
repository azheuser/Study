#include<bits/stdc++.h>

int main() {
    std::int64_t N;
    std::cin >> N;
    int sqrtN = std::sqrt(N);

    int count = 0;
    auto num = N;
    int max_length = 0;
    int begin = 0;

    for(int i = 2; i <= sqrtN; i++) {
        num = N;
        count = 0;
        for(int j = i; num % j == 0 && num != 0; j++) {
            num /= j;
            count++;
        }
        if(count > max_length) {
            max_length = count;
            begin = i;
        }
    }

    if(max_length) {
        std::cout << max_length << std::endl;
        std::cout << begin;
        for(int i = 1; i < max_length; i++) {
            std::cout << "*" << begin + i;
        }
    }
    else {
        std::cout << 1 << std::endl << N;
    }

}
