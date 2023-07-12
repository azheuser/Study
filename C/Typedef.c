#include<stdio.h>
//typedef用法：
//把typedef到最后单词之间的所有东西，命名为最后单词 
int main() {
	
	typedef int Length; 
	//length等价于int类型 
	
	typedef char *Strings[10];
	//Strings是10个字符指针的数组 
	
	typedef struct node {
		int data;
		struct node *next;
	} aNode;
	//或者: typedef struct node aNode; 
	//这样用aNode就可以代替struct node 
	 
	 return 0;	
}
