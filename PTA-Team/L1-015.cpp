#include<iostream>
#include<locale>
#include<algorithm>
#include<string>
#include<cmath>
#include<stdint.h>
//#include<bits/stdc++.h>

using namespace std;

int main() {
    int N; // ÁÐ
    char C;
    cin >> N >> C;
    int M = (N + 1) / 2; // ÐÐ

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << C;
        }
        cout << endl;
    }

    return 0;
}
