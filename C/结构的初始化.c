#include<stdio.h>

//�ṹ��Ա
//�ṹ�������е���
//������[]��������±������Ԫ��
//�ṹ�� .����������ַ������Ա 

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
	};//�˴����������dayû��ֵ��Ĭ��.day=0 
	

	struct date day;
	day = today; //�˴�day�õ�today���еĳ�Ա 
	day.year = 2015; 
	
	struct date *pDate = &today;
//	�ṹ������Ĳ�֮ͬ����
//	�����������������ĵ�ַ( *p=a <=> *p=&a[0] )
//	�ṹ�ı��������ǽṹ�����ĵ�ַ������ʹ��&����� 
	printf("Today's data is %i-%i-%i.\n", 
		today.year, today.month, today.day);
	printf("This month is %i-%i-%i.\n", 
		thismonth.year, thismonth.month, thismonth.day);
	printf("The day's date %i-%i-%i.\n", 
		day.year, day.month, day.day);
	printf("Address of today is %p\n", pDate);
	
	return 0;
}  
