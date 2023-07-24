/*
 * C语言在函数调用的时候永远是传值的
 * 问题在于传入函数的是外面那个结构的克隆体，而不是指针
 * 在输入函数中，创建一个"临时结构变量"，然后把这个结构返回给调用者
 * 解决方案：结构与函数——临时结构变量.c
 */
 
#include<stdio.h>

struct point {
	int x;
	int y;
}; 

void getStruct(struct point p);
void output(struct point);

int main(int argc, char const *argv[]) {
	struct point y = {
		0, 0
	};
	getStruct(y);
	output(y);
}

void getStruct(struct point p){
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
}

void output(struct point p) {
	printf("%d, %d\n", p.x, p.y);
}
