#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using i32 = int;
using i64 = long long;
using f32 = float;
using f64 = long double;
using namespace std;

struct HuaQuan; // 划拳
int A, B, N;

struct HuaQuan {
	int Ahan;
	int Ahua;
	int Bhan;
	int Bhua;
	
	HuaQuan(int a1=0, int a2=0, int b1=0, int b2=0)
	: Ahan{a1}, Ahua{a2}, Bhan{b1}, Bhua{b2} {}
	
	friend istream& operator>>(istream& is, HuaQuan& hq) {
		is >> hq.Ahan >> hq.Ahua >> hq.Bhan >> hq.Bhua;
		return is;
	}
	
	void HeJiu() {
		int han = Ahan + Bhan;
		// 划 == 喊之和 就要喝，
		if(Ahua != Bhua) {
			if(Ahua == han) {
				A--;
			}
			else if(Bhua == han) {
				B--;
			}
		}
	}
};

int main() {
	cin >> A >> B >> N;
	int a = A, b = B;
	for(int i = 0; i < N and (A >= 0 and B >= 0); i++) {
		HuaQuan hq;
		cin >> hq;
		hq.HeJiu();
	}
	if(A < 0) {
		cout << "A" << endl << b - B;
	}
	else if(B < 0) {
		cout << "B" << endl << a - A;
	}
}
