#include <stdio.h>
int main()
{
	int x;
	int one, two, five;
	int exit = 0;
	scanf("%d", &x);
	for( one = 0; one <= x*10; one++) {
		for( two = 0; two <= x*10/2; two++ ) {
			for( five = 0; five <= x*10/5; five++ ) {
				if( one + two*2 + five*5 == x*10) {
					printf("\n������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",one, two, five, x);
				exit = 1;
				break;
				}
			}
		if ( exit = 1) break;
		}
	if ( exit = 1) break;
	}
	return 0;
}
