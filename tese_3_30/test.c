#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[6] = { 0 };
//    while (n--)
//    {
//        for (i = 0; i < 6; i++)
//        {
//            scanf("%1d", &arr[i]);//输入是连续的没有间断
//        }
//        if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
//        {
//            printf("You are lucky!\n");
//        }
//        else
//        {
//            printf("Wish you good luck.\n");
//        }
//    }
//    return 0;
//}

#include<stdio.h>

int main()//L1-002 打印沙漏 --- 留有一个点过不去
{
	int num = 0;//总数
	char ch = 0;//字符
	int count = 0;//剩下的
	scanf("%d %c", &num, &ch);
	int r = 0;
	while (2 * r * r - 1 <= num)
		r++;
	r--;
	count = num - 2 * r * r + 1;
	int i = 0;
	//上半部分
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (r - i) - 1; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	//下半部分
	for(i = 0; i < r - 1; i++)
	{
		int j = 0;
		for (j = 0; j < r - 2 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (i + 1) + 1; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
		printf("%d", count);
	return 0;
}