#define _CRT_SECURE_NO_WARNINGS

//ð�������ʵ���ǣ���������Ԫ�������Ƚϣ���������Ҫ����˳���򽻻�����Ԫ�أ�ÿһ�α������鶼��һ��Ԫ�ص����ó��ֵ�λ�ã�������̳�Ϊð�ݣ�n��Ԫ��n-1��ð�ݼ��ɽ�����Ԫ���ų�����˳��
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1 ,3,5,7,9,2,4,6,8,0 };//����arrΪҪ��������飬�ų�����
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)//sz-1��ֹԽ�磬-i����ʱ�临�Ӷ�
//		{
//			if (arr[j] > arr[j + 1])
//
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "abcde";
//	//c d ����λ���γɲ�ͬ�ַ���
//	char arr2[] = "abdce";
//	//c d �ٴν�����ԭ�ַ���
//	char arr3[] = "abcde";
//	if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1��arr2��ͬ\n");
//	}
//	else
//	{
//		printf("arr1��arr2��ͬ\n");
//	}
//	if (strcmp(arr1, arr3) == 0)
//	{
//		printf("arr1��arr3��ͬ\n");
//	}
//	else
//	{
//		printf("arr1��arr3��ͬ\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);//�Դ����ָ��Ľ��ж���
//	while (*str1&&*str2)
//	{
//		if (*str1 != *str2)
//			break;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	//c d ����λ���γɲ�ͬ�ַ���
//	char arr2[] = "abdce";
//	//c d �ٴν�����ԭ�ַ���
//	char arr3[] = "abcde";
//	if (my_strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1��arr2��ͬ\n");
//	}
//	else
//	{
//		printf("arr1��arr2��ͬ\n");
//	}
//	if (my_strcmp(arr1, arr3) == 0)
//	{
//		printf("arr1��arr3��ͬ\n");
//	}
//	else
//	{
//		printf("arr1��arr3��ͬ\n");
//	}
//	return 0;
//}