#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number = rand()%100;
	int a;
	int count = 0;
	
	do {
		printf("��²����1~100��������"); 
		scanf("%d", &a);
		count ++;
		if( a > number )
		 printf("��µ�������\n");
		else if( a < number )
		 printf("��µ���С��\n"); 
	   } while(a != number);
    
	printf("�������¶��ˣ�����%d�Ρ�\n", count);
	
	return 0; 
} 
