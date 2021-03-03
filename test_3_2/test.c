#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
long long int F(long long n, long long* pmax_n)
{
	long long int count = 0;//记录1的个数
	long long int i = 0;
	for (i = 1; i <= n; i++)
	{
		long long int j = i;
		while (j)//循环计数
		{
			if (j % 10 == 1)
				count++;//计数
			j /= 10;
		}
		if (count == i)
			*pmax_n = i;
	}
	return count;//返回1的个数
}
void test(long long int count,long long int spe)//测试程序
{
	if (count != spe)
	{
		printf("你的代码未能通过所有测试数据\n");
		exit(0);
	}
}
int main()
{
	
	long long max_n = 0;
	long long spe = 0;
	long long int n = 0;//创建足够大的整型空间
	FILE* pf = fopen("test.txt", "r");//以相对路径，和只读形式打开一个文件文件
	if (pf == NULL)
	{
		perror("open test.txt");
		//输出打开失败的原因
		return 0;
	}                            //N  标准输出个数
	while (~fscanf(pf, " %lld %lld", &n, &spe)) {
		//循环读取文件数据，以EOF为结束标志
	//scanf("%lld", &n);
	unsigned long long uStartTime = GetTickCount64();//获取程序开始时间
	unsigned long long uEndTime;
		long long count = F(n, &max_n);//通过地址改变max_n的值

		test(count, spe);//调用测试程序
		printf("输入：%lld\n", n);
		printf("输出：%lld\n", count);//输出个数。
		uEndTime = GetTickCount64();
		printf("运行时间：%llums\n\n", uEndTime - uStartTime);//计算并输出运行时间
	}
		printf("N最大为%lld\n\n", max_n);//输出n和1数量相等的最大值
	printf("你的代码通过了所有测试用例");
	fclose(pf);
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <time.h>
//clock_t start, finish;
//double Total_time;
//start = clock();
//long long int Count(long long int n)
//{
//	long long int count = 0;
//	while (n)
//	{
//		count += (n % 10 == 1) ? 1 : 0;
//		n = n / 10;
//	}
//	return count;
//}
//int main()
//{
//	long long int n, i, count;
//	while (scanf("%lld", &n) != EOF)
//	{
//		count = 0;
//		for (i = 1; i <= n; i++)
//		{
//			count += Count(i);
//		}
//		printf("%lld\n", count);
//	}
//	finish = clock();
//	Total_time = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("%f seconds\n", Total_time);
//
//	return 0;
//}