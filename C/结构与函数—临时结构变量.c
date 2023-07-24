#include<stdio.h>
// C语言在函数调用的时候永远是传值的

// 更好的方法是传指针： 见：结构与指针.c

struct point {
	int x;
	int y;
}; 

struct point getStruct(void);
void output(struct point);

int main(int argc, char const *argv[]) {
	struct point y = {
		0, 0
	};
	y = getStruct();
	output(y);
}

struct point getStruct(void) {
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
	return p; // 返回类型是 struct point
}

void output(struct point p) {
	printf("%d, %d\n", p.x, p.y);
}
