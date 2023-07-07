#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>

using i64 = int64_t;
using i32 = int32_t;
using f64 = double;
using f32 = float;
using namespace std;

int main() {
	string in;
	getline(cin, in);
	f32 flag[2] = {1, 1};
	int length = in.length();
	if(in[0] == '-') {
		length--;
//		in.erase(0);
		flag[0] = 1.5f;
	}
	if((in.back()-'0') % 2 == 0) {
		flag[1] = 2.0f;
	}
	
	int cnt_2 = 0;
	for(auto i : in) {
		if(i == '2') {
			cnt_2 ++;
		}
	}
	
	f32 out = cnt_2 * 1.0 / length * flag[0] * flag[1] * 100.0f;
	cout << fixed << setprecision(2) << out << "%";
}
