//*����ָ��ĺ���
//-���ر��ر����ĵ�ַ��Σ�յ�
//-����ȫ�ֱ�����̬���ر����ĵ�ַ�ǰ�ȫ��
//-�����ں�����malloc���ڴ��ǰ�ȫ�ģ����������������
//-��õ������Ƿ���ָ�� 

//tips��ʿ�� 
//-��Ҫʹ��ȫ�ֱ������ں����䴫�ݲ����ͽ��
//-��������ʹ��ȫ�ֱ���
//---���������İ���
//---*ʹ��ȫ�ֱ����;�̬���ر����ĺ������̲߳���ȫ�� 
#include<stdio.h>

int *f(void);
void g(void);

int main(int argc, char const *argv[]) {
	int *p = f();
	printf("*p = %d\n", *p);
	g();
	printf("*p = %d\n", *p);
	
	return 0;
} 

int *f(void) {
	int i = 12;
	printf("&i = %d\n", &i);
	return &i;
}

void g(void) {
	int k = 24;
	printf("k = %d\n", k);
	printf("&k = %d\n", &k);
}
