#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
long long int F(long long n, long long* pmax_n)
{
	long long int count = 0;//��¼1�ĸ���
	long long int i = 0;
	for (i = 1; i <= n; i++)
	{
		long long int j = i;
		while (j)//ѭ������
		{
			if (j % 10 == 1)
				count++;//����
			j /= 10;
		}
		if (count == i)
			*pmax_n = i;
	}
	return count;//����1�ĸ���
}
void test(long long int count,long long int spe)//���Գ���
{
	if (count != spe)
	{
		printf("��Ĵ���δ��ͨ�����в�������\n");
		exit(0);
	}
}
int main()
{
	
	long long max_n = 0;
	long long spe = 0;
	long long int n = 0;//�����㹻������Ϳռ�
	FILE* pf = fopen("test.txt", "r");//�����·������ֻ����ʽ��һ���ļ��ļ�
	if (pf == NULL)
	{
		perror("open test.txt");
		//�����ʧ�ܵ�ԭ��
		return 0;
	}                            //N  ��׼�������
	while (~fscanf(pf, " %lld %lld", &n, &spe)) {
		//ѭ����ȡ�ļ����ݣ���EOFΪ������־
	//scanf("%lld", &n);
	unsigned long long uStartTime = GetTickCount64();//��ȡ����ʼʱ��
	unsigned long long uEndTime;
		long long count = F(n, &max_n);//ͨ����ַ�ı�max_n��ֵ

		test(count, spe);//���ò��Գ���
		printf("���룺%lld\n", n);
		printf("�����%lld\n", count);//���������
		uEndTime = GetTickCount64();
		printf("����ʱ�䣺%llums\n\n", uEndTime - uStartTime);//���㲢�������ʱ��
	}
		printf("N���Ϊ%lld\n\n", max_n);//���n��1������ȵ����ֵ
	printf("��Ĵ���ͨ�������в�������");
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