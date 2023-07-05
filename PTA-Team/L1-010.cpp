#include<iostream>
#include<algorithm>

int main(int argc, char const* argv[]) {
    int arr[3]{0};
    for(auto &i : arr) {
        std::cin >> i;
    }

    std::sort(arr, arr + 3);
    for(int i = 0; i < 3; i++) {
        std::cout << arr[i];
        if(i != 2) {
            std::cout << "->";
        }
    }

    return 0;
}
