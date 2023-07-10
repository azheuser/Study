//malloc 
//#include<stdlib.h>
//void *malloc(size_t, size);
//---向malloc申请的空间的大小是以字节为单位
//---返回的结果是void*，需要类型转换为自己需要的类型
//-----(int*)malloc(n*sizeof(int));
//申请失败则返回 0 or NULL 

#include <stdio.h>
#include <stdlib.h>

//常见问题
//---申请了没free --> 长时间运行内存逐渐下降
//-----新手：忘了
//-----老手：找不到合适的free的时机
//---free过了再free
//---地址变过了，直接去free

//解决方法
//---一旦有malloc就对上一个free
//---对程序整体架构有良好的设计，保证程序有良好的时机free它们
//---经验：多阅读，多写，多总结

int main(void) {
	int number;
	void *p = 0;//指针好习惯：定义后初始为 0(可以配合malloc)
	printf("输入数量：");
	scanf("%d", &number);
//	int a[number];
	int *a;
	a = (int*)malloc(number*sizeof(int));
	int i;
	for(i=0; i<number; i++) {
		scanf("%d", &a[i]);
	}
	for(i=number-1; i>=0; i--) {
		printf("%d ", a[i]);
	}
	free(a);
	free(NULL);
//Free
//---把申请得来的空间还给"系统"
//---申请过的空间，最终都应该要还
//-----混出来的，迟早都是要还的
//---只能还申请来的空间的首地址
	
	return 0; 
}
