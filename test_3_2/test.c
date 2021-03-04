#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include<time.h>
//
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
//void test(long long int count,long long int spe)//测试程序
//{
//	if (count != spe)
//	{
//		printf("你的代码未能通过所有测试数据\n");
//		exit(0);
//	}
//}
//int main()
//{
//	
//	long long max_n = 0;
//	long long spe = 0;
//	long long int n = 0;//创建足够大的整型空间
//	FILE* pf = fopen("test.txt", "r");//以相对路径，和只读形式打开一个文件文件
//	if (pf == NULL)
//	{
//		perror("open test.txt");
//		//输出打开失败的原因
//		return 0;
//	}                            //N  标准输出个数
//	while (~fscanf(pf, " %lld %lld", &n, &spe)) {
//		//循环读取文件数据，以EOF为结束标志
//	//scanf("%lld", &n);
//		clock_t sta_t = clock();//获取程序运行时间
//		long long count = F(n, &max_n);//通过地址改变max_n的值
//
//		test(count, spe);//调用测试程序
//		printf("输入：%lld\n", n);//输出测试数据
//		printf("输出：%lld\n", count);//输出个数。
//		clock_t end_t = clock();//获取程序运行时间
//		printf("运行时间：%.3fs\n\n", ((double)end_t - sta_t)/CLOCKS_PER_SEC);//计算并输出运行时间
//	}
//		printf("N最大为%lld\n\n", max_n);//输出n和1数量相等的最大值
//	printf("你的代码通过了所有测试用例");
//	fclose(pf);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	0
//}

#include <stdio.h>
int main(void)
{
    int n = 0;
    char ch = '0';
    int r = 0;
    int i = 0;
    scanf("%d %c", &n, &ch);
    while (++r)
    {
        if ((2 * r * r - 1) == n)
            break;
        if ((2 * r * r - 1) > n)
        {
            r--;
            break;
        }
    }
    int sum = n - 2 * r * r + 1;
    //上半部分
    for (i = 0; i < r; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2 * (r - i) - 1; j++)
            printf("*");
        printf("\n");
    }
    //下半部分
    for (i = 0; i < r - 1; i++)
    {
        int j = 0;
        for (j = 0; j < r - 2 - i; j++)
            printf(" ");
        for (j = 0; j < 2 * (i + 1) + 1; j++)
            printf("*");
        printf("\n");
    }
    if(sum>0)
    printf("%d\n", sum);
    return 0;
}
