#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const* argv[]) {
    string A, B;
    getline(cin, A, '\n');
    getline(cin, B, '\n');

    for(int i = 0; i < A.length(); i++) {
        if(B.find(A[i]) != string::npos) {
            continue;
        }
        else {
            cout << A[i];
        }
    }

    return 0;
}
