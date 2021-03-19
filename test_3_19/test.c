#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	/*char ch = 'a';
	int n = 97;
	printf("ch = %d,n = %c", ch, n);*/
	//printf("%d", sizeof(long double));
	//printf("%d", sizeof(double));

	//float n1 = 10.25;
	//1010.01 --- 二进制表示
	//1.01001*2^3
	// S = 0 -> 0 符号
	// M = 1.01001 ->01001000000000000000000  补全23个位
	// E = 3+127 -> 00000011 + 01111111-> 10000010  加上中间值
	// 所以在内存中应该存储以下形式
	// 0 10000010 01001000000000000000000
	// S    E            M
	//41 24 00 00  转换成十六进制的数
	//00 00 24 41  实际看到 

	return 0;
}