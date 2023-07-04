#include<bits/stdc++.h>

using namespace std;

int main() {
    string input_num;
    getline(cin, input_num, '\n');
    int nums[10]{0};

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < input_num.length(); j++) {
            if((i + '0') == input_num[j]) { // int -> char
                nums[i]++;
            }
        }
    }

    int D{0};
    for(int i : nums) {
        if(i != 0) {
            cout << D << ":" << i << endl;
        }
        D++;
    }

    return 0;
}
