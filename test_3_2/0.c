//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//long long int F(long long n, long long* pmax_n)
//{
//	long long int count = 0;//记录1的个数
//	long long int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		long long int j = i;
//		while (j)//循环计数
//		{
//			if (j % 10 == 1)
//				count++;//计数
//			j /= 10;
//		}
//		if (count == i)
//			*pmax_n = i;
//	}
//	return count;//返回1的个数
//}
//int main()
//{
//	long long n = 0;
//	long long int max_n = 0;
//	scanf("%lld", &n);
//	long long count = F(n, &max_n);
//	printf("1的个数为：%lld\n", count);
//	printf("N的最大值为：%lld", max_n);
//	return 0;
//}