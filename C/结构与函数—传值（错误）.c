/*
 * C�����ں������õ�ʱ����Զ�Ǵ�ֵ��
 * �������ڴ��뺯�����������Ǹ��ṹ�Ŀ�¡�壬������ָ��
 * �����뺯���У�����һ��"��ʱ�ṹ����"��Ȼ�������ṹ���ظ�������
 * ����������ṹ�뺯��������ʱ�ṹ����.c
 */
 
#include<stdio.h>

struct point {
	int x;
	int y;
}; 

void getStruct(struct point p);
void output(struct point);

int main(int argc, char const *argv[]) {
	struct point y = {
		0, 0
	};
	getStruct(y);
	output(y);
}

void getStruct(struct point p){
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d, %d\n", p.x, p.y);
}

void output(struct point p) {
	printf("%d, %d\n", p.x, p.y);
}
