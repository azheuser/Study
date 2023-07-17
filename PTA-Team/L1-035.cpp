#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

auto print = [](list<string> out) {
	cout << "===============" << endl;
	for(auto i : out) {
		cout << i << endl;
	}
};

int main() {
	vector<string> ls;
	for(string in; cin >> in && in != ".";) {
		ls.push_back(in);
	}
//	print(ls);
	int cnt = ls.size();
	if(cnt >= 14) {
		cout << ls[1] << " and " << ls[13] << " are inviting you to dinner...";
	}
	if(cnt >= 2 && cnt < 14) {
		cout << ls[1] << " is the only one for you...";
	}
	if(cnt < 2) {
		cout << "Momo... No one is for you ...";
	}
	
	return 0;
}
