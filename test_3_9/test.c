#define _CRT_SECURE_NO_WARNINGS


//能否快速找出一个数组中的两个数字，让这两个数字之和等于一个给定的值，为了简化起见，我们假设这个数组中肯定存在至少一组符合要求的解。
//
//解法一：采用穷举法，从数组中任意取出两个数字，计算两者之和是否为给定的数字。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//随意给进10个元素
//	printf("请输入给定的数字>:");//假设为15
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 10 - 1; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < 10 ; j++)
//		{
//			if (arr[i] + arr[j] == n)
//			{
//				printf("下标为 %d %d\n", i, j);
//				//输出 6 9和7 8 
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//解法二：对数组中的每个数字arr[i]都判别Sum - arr[i]是否在数组中。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int n = 0;
//	printf("请输入给定数字>:");//假设为12
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = n - arr[i];
//		int j = 0;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (tmp == arr[j])
//			{
//				printf("下标为 %d %d\n", i, j);
//				//输出 0 6，1 5，2 4
//				break;
//			}
//		}
//	}
//	return 0;
//}
// 
//解法三：对数组进行排序，然后使用二分查找法针对arr[i]查找Sum - arr[i]。
#include<stdio.h>
#include<stdlib.h>
int compare(const int* e1, const int* e2)
{
	return *e1 - *e2;
}
int main()
{
	int arr[10] = { 0,2,4,6,8,1,3,5,7,9 };
	int n = 0;
	printf("请输入给定数字>:");
	scanf("%d", &n);

	qsort(arr, 10, sizeof(int), compare);
	//排成升序
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//left = i;
		int tmp = n - arr[i];
		int left = 0;
		int right = 10 - 1;
		while (left <= right)
		{
			int mid = (right + left) / 2;
			if (arr[mid] > tmp)
			{
				right = mid;
				right--;
			}
			else if (arr[mid] < tmp)
			{
				left = mid;
				left++;
			}
			else
			{
				printf("下标为>: %d %d\n", i, mid);
				break;
			}
		}
	}
	return 0;
}