/*
 * 没有直接的方式可以一次scanf一个结构
 * 转到--> 结构与函数-传值(错误).c
 *
 */
#include<stdio.h>
#include<stdbool.h>
 
struct date {
	int month;
	int day;
	int year;
}; 

bool isLeap(struct date d); // 判断闰年
int numberOfDays(struct date d); // 明天是几号

int main(int argc, char const *argv[]) {
	
	struct date today, tomorrow;
	
	printf("Enter today's date (mm dd yyyy):");
	scanf("%i %i %i", &today.month, &today.day, &today.year);
	
	if(today.day != numberOfDays(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if(today.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is %i-%i-%i.\n",
		tomorrow.year, tomorrow.month, tomorrow.day);
		
	return 0;
}

int numberOfDays(struct date d) {
	int days;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(d.month == 2 && isLeap(d))
		days = 29;
	else
		days = daysPerMonth[d.month-1];//d.month-1 数组从0开始数 
	return days; //单一出口 
}

bool isLeap(struct date d) {
	bool leap = false;
	if((d.year%4 == 0 && (d.year%100 !=0) || d.year%400==0))
	leap = true;
	return leap;
} 


