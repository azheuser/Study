#include<stdio.h>
//typedef�÷���
//��typedef����󵥴�֮������ж���������Ϊ��󵥴� 
int main() {
	
	typedef int Length; 
	//length�ȼ���int���� 
	
	typedef char *Strings[10];
	//Strings��10���ַ�ָ������� 
	
	typedef struct node {
		int data;
		struct node *next;
	} aNode;
	//����: typedef struct node aNode; 
	//������aNode�Ϳ��Դ���struct node 
	 
	 return 0;	
}
