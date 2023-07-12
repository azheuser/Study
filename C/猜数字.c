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
		printf("请猜猜这个1~100的整数："); 
		scanf("%d", &a);
		count ++;
		if( a > number )
		 printf("你猜的数大了\n");
		else if( a < number )
		 printf("你猜的数小了\n"); 
	   } while(a != number);
    
	printf("真棒！你猜对了，用了%d次。\n", count);
	
	return 0; 
} 
