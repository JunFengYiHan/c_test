#define _CRT_SECURE_NO_WARNINGS


//�ܷ�����ҳ�һ�������е��������֣�������������֮�͵���һ��������ֵ��Ϊ�˼���������Ǽ�����������п϶���������һ�����Ҫ��Ľ⡣
//
//�ⷨһ��������ٷ���������������ȡ���������֣���������֮���Ƿ�Ϊ���������֡�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//�������10��Ԫ��
//	printf("���������������>:");//����Ϊ15
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 10 - 1; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < 10 ; j++)
//		{
//			if (arr[i] + arr[j] == n)
//			{
//				printf("�±�Ϊ %d %d\n", i, j);
//				//��� 6 9��7 8 
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//�ⷨ�����������е�ÿ������arr[i]���б�Sum - arr[i]�Ƿ��������С�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int n = 0;
//	printf("�������������>:");//����Ϊ12
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = n - arr[i];
//		int j = 0;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (tmp == arr[j])
//			{
//				printf("�±�Ϊ %d %d\n", i, j);
//				//��� 0 6��1 5��2 4
//				break;
//			}
//		}
//	}
//	return 0;
//}
// 
//�ⷨ�����������������Ȼ��ʹ�ö��ֲ��ҷ����arr[i]����Sum - arr[i]��
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
	printf("�������������>:");
	scanf("%d", &n);

	qsort(arr, 10, sizeof(int), compare);
	//�ų�����
	
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
				printf("�±�Ϊ>: %d %d\n", i, mid);
				break;
			}
		}
	}
	return 0;
}