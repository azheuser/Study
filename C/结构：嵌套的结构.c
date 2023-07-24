#include <stdio.h> 

struct date {
	int year;
	int month;
	int day;
};

struct time {
	int hr;
	int min;
	int s;
};

struct dateANDtime {
	struct date sdate;
	struct time stime;
};

int main(int argc, char const *argv[]) {
	struct dateANDtime today[]  = {
		{
			{ 2021, 12, 27, }, { 14, 38, 30, }, //sdate, stime
		}, //today[0] 
	};
	printf("NOW：%d年%d月%d日%d时%d分%d秒", 
		today[0].sdate.year, today[0].sdate.month, today[0].sdate.day, 
		today[0].stime.hr, today[0].stime.min, today[0].stime.s);
}
