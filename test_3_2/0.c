//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//long long int F(long long n, long long* pmax_n)
//{
//	long long int count = 0;//��¼1�ĸ���
//	long long int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		long long int j = i;
//		while (j)//ѭ������
//		{
//			if (j % 10 == 1)
//				count++;//����
//			j /= 10;
//		}
//		if (count == i)
//			*pmax_n = i;
//	}
//	return count;//����1�ĸ���
//}
//int main()
//{
//	long long n = 0;
//	long long int max_n = 0;
//	scanf("%lld", &n);
//	long long count = F(n, &max_n);
//	printf("1�ĸ���Ϊ��%lld\n", count);
//	printf("N�����ֵΪ��%lld", max_n);
//	return 0;
//}