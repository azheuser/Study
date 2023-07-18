#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool book[100000] = { false };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k == 1) {
			int tmp;
			cin >> tmp;
			continue;
		}
		for (int i = 0; i < k; i++) {
			int num;
			cin >> num;
			book[num] = true;
		}
	}
	int m;
	bool flag = true;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		if (!book[num]) {
			if (flag) {
				cout << setw(5) << setfill('0') << num;
				flag = false;
			}
			else {
				cout << " ";
				cout << setw(5) << setfill('0') << num;
			}
			book[num] = true;
		}
	}
	if (flag) {
		cout << "No one is handsome";
	}
	return 0;
}


