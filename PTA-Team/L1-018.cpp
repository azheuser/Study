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
	i32 h,m;
	string Dang = "Dang";
	scanf("%d:%d",&h,&m);
	if(h >= 0 and h <=12 ) {
		printf("Only %02d:%02d.  Too early to Dang.", h, m);
	}
	else {
		int cnt = h - 12;
		if(m > 0) {
			cnt ++;
		}
		for(int i = 0; i < cnt; i++) {
			cout << Dang;
		}
	}
	
	return 0;
}
