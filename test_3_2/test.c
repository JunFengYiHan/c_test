#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include<time.h>
//
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
//void test(long long int count,long long int spe)//���Գ���
//{
//	if (count != spe)
//	{
//		printf("��Ĵ���δ��ͨ�����в�������\n");
//		exit(0);
//	}
//}
//int main()
//{
//	
//	long long max_n = 0;
//	long long spe = 0;
//	long long int n = 0;//�����㹻������Ϳռ�
//	FILE* pf = fopen("test.txt", "r");//�����·������ֻ����ʽ��һ���ļ��ļ�
//	if (pf == NULL)
//	{
//		perror("open test.txt");
//		//�����ʧ�ܵ�ԭ��
//		return 0;
//	}                            //N  ��׼�������
//	while (~fscanf(pf, " %lld %lld", &n, &spe)) {
//		//ѭ����ȡ�ļ����ݣ���EOFΪ������־
//	//scanf("%lld", &n);
//		clock_t sta_t = clock();//��ȡ��������ʱ��
//		long long count = F(n, &max_n);//ͨ����ַ�ı�max_n��ֵ
//
//		test(count, spe);//���ò��Գ���
//		printf("���룺%lld\n", n);//�����������
//		printf("�����%lld\n", count);//���������
//		clock_t end_t = clock();//��ȡ��������ʱ��
//		printf("����ʱ�䣺%.3fs\n\n", ((double)end_t - sta_t)/CLOCKS_PER_SEC);//���㲢�������ʱ��
//	}
//		printf("N���Ϊ%lld\n\n", max_n);//���n��1������ȵ����ֵ
//	printf("��Ĵ���ͨ�������в�������");
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
    //�ϰ벿��
    for (i = 0; i < r; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2 * (r - i) - 1; j++)
            printf("*");
        printf("\n");
    }
    //�°벿��
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
