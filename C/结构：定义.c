#include<stdio.h>

//外部声明结构类型，可以被多个函数使用
//在函数内部声明的结构类型只能在函数内部使用 
struct date {
		int month;
		int day;
		int year;
	}; 
	
int main(int argc, char const *argv[]) {
	
	struct date today;
	
	today.month = 07;
	today.day = 31;
	today.year = 2014;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year, today.month, today.day);
	
	return 0;	
}
