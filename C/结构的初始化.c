#include<stdio.h>

//结构成员
//结构和数组有点像：
//数组用[]运算符和下标访问其元素
//结构用 .运算符和名字访问其成员 

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[]) {
	
	struct date today = {
		07, 31, 2014, 
	};
	struct date thismonth = {
		.month = 7, .year = 2014, 
	};//此处和数组很像，day没赋值，默认.day=0 
	

	struct date day;
	day = today; //此处day得到today所有的成员 
	day.year = 2015; 
	
	struct date *pDate = &today;
//	结构和数组的不同之处：
//	数组变量名就是数组的地址( *p=a <=> *p=&a[0] )
//	结构的变量名不是结构变量的地址，必须使用&运算符 
	printf("Today's data is %i-%i-%i.\n", 
		today.year, today.month, today.day);
	printf("This month is %i-%i-%i.\n", 
		thismonth.year, thismonth.month, thismonth.day);
	printf("The day's date %i-%i-%i.\n", 
		day.year, day.month, day.day);
	printf("Address of today is %p\n", pDate);
	
	return 0;
}  
