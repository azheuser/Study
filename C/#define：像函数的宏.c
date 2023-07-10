//像函数的宏
//-#define cube(x) ((x)*(x)*(x))
//-宏可以带参数 

//错误定义的宏
//-#define RADTODEG(x) (x*57.29578) 
//-#define RADTODEG(x) ((x)*57.29578)

//带参数的宏的规则：类函数 
//-一切都要括号
//---整个值要括号
//---参数出现的每个地方都有括号
//-define RADTODEG(x) ((x)*57.29578)
/***
for me:
宏对变量加括号就是先括号再Other
eg：行号36 43
不加括号就是单纯的文本替换
eg：行号35 42 
***/

//带参数的宏
//-可以有多个参数
//---#define MIN(a, b) ((a)>(b)?(b)(a)) 
//-也可以组合（嵌套）使用其它宏
//-在大型程序的代码中使用非常普遍
//-可以非常复杂，如 “产生 ”函数
//---在#和##这两个运算符的帮助下
//-存在中西方文化差异（宏没有类型检查） 

//部分宏会被inline函数替代（自学）

#include <stdio.h>
#define cube(x) ((x)*(x)*(x))
#define RADTODEG1(x) (x*5) 
#define RADTODEG2(x) ((x)*5) 

int main(int argc, char const *argv[]) {
	int i;
//	scanf("%d", &i);
//	printf("%d\n", cube(i+2));
	printf("1 %d\n", RADTODEG1(1+2)); //11
	printf("2 %d\n", RADTODEG2(1+2)); //15
	
	return 0;
}
