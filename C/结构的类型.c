/*
 * ���������ṹ�� ���Ը�ֵ�� ȡ��ַ�� ���ݸ���������
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
	
	struct date *pDate = &today; // struct����array ��Ҫ &
	
	day = today; // day �õ� today ���е���ֵ
	day.year = 2015;
	
	printf("Today`s date is %i-%i-%i. \n",
		today.year, today.month, today.day);
	printf("The day`s date is %i-%i-%i. \n",
		day.year, day.month, day.day);
	
	return 0;
}
