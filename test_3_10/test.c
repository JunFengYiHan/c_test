#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
////struct 
//
////int main()
////{
////	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
////	printf("%p\n", (arr + 1));
////	printf("%p", *(arr + 1));
////	return 0;
////}
//
//#include<stdio.h>
//
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f", &a, &b);
//	c = 0.5 * a * b;
//	printf("%.6f", c);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char a[1000];
//	int b[10] = { 0 };
//	int i;
//	scanf("%s", a);
//	for (i = 0; i < 1000; i++) {
//		switch (a[i]) {
//		case '0':b[0]++; break;
//		case '1':b[1]++; break;
//		case '2':b[2]++; break;
//		case '3':b[3]++; break;
//		case '4':b[4]++; break;
//		case '5':b[5]++; break;
//		case '6':b[6]++; break;
//		case '7':b[7]++; break;
//		case '8':b[8]++; break;
//		case '9':b[9]++; break;
//		}
//	}
//	if (b[0] > 0) {
//		printf("0:%d\n", b[0]);
//	}
//	if (b[1] > 0) {
//		printf("1:%d\n", b[1]);
//	}
//	if (b[2] > 0) {
//		printf("2:%d\n", b[2]);
//	}
//	if (b[3] > 0) {
//		printf("3:%d\n", b[3]);
//	}
//	if (b[4] > 0) {
//		printf("4:%d\n", b[4]);
//	}
//	if (b[5] > 0) {
//		printf("5:%d\n", b[5]);
//	}
//	if (b[6] > 0) {
//		printf("6:%d\n", b[6]);
//	}
//	if (b[7] > 0) {
//		printf("7:%d\n", b[7]);
//	}
//	if (b[8] > 0) {
//		printf("8:%d\n", b[8]);
//	}
//	if (b[9] > 0) {
//		printf("9:%d\n", b[9]);
//	}
//	return 0;
//}
#include<stdio.h>

int main()
{
	int n1 = 10;
	//  00000000000000000000000000001010  -- - 原码（10）
	//	00000000000000000000000000001010  -- - 反码
	//	00000000000000000000000000001010  -- - 补码
	// 	0000000a  --翻译为十六进制数
	//  0a000000  --实际看到的

	int n2 = -10;
	//	10000000000000000000000000001010  -- - 原码（ - 10）
	//	11111111111111111111111111110101  -- - 反码
	//	11111111111111111111111111110110 -- - 补码
	// 	fffffff6  --翻译为十六进制数
	//  f6ffffff  --实际看到的
	return 0;
}