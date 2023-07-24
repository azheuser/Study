/*
 * 对于整个结构， 可以赋值， 取地址， 传递给函数参数
*/

#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[]) {

	struct date today;

	today = (struct date) {
		07, 31, 2014,
	};
	
	struct date day;
	
	struct date *pDate = &today; // struct不是array 需要 &
	
	day = today; // day 得到 today 所有的数值
	day.year = 2015;
	
	printf("Today`s date is %i-%i-%i. \n",
		today.year, today.month, today.day);
	printf("The day`s date is %i-%i-%i. \n",
		day.year, day.month, day.day);
	
	return 0;
}
