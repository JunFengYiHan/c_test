#define _CRT_SECURE_NO_WARNINGS

//ð�������ʵ���ǣ���������Ԫ�������Ƚϣ���������Ҫ����˳���򽻻�����Ԫ�أ�ÿһ�α������鶼��һ��Ԫ�ص����ó��ֵ�λ�ã�������̳�Ϊð�ݣ�n��Ԫ��n-1��ð�ݼ��ɽ�����Ԫ���ų�����˳��
//#include<stdio.h>
//
//int main()//ð������
//{
//	int arr[10] = { 1 ,3,5,7,9,2,4,6,8,0 };//����arrΪҪ��������飬�ų�����
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	for (i = 0; i < sz; i++)//����ʼ
//	{
//		for (j = 0; j < sz - 1 - i; j++)//sz-1��ֹԽ�磬-i����ʱ�临�Ӷ�
//		{
//			if (arr[j] > arr[j + 1])//������˳���򽻻�
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (0 == flag)//δ����������˵�����ź���
//			break;
//	}//�������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//�������������
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
// 
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void _swap(char* str1, char* str2, size_t width)
//{
//	while (width--)
//	{
//		char temp = *str1;
//		*str1 = *str2;
//		*str2 = temp;
//		str1++;
//		str2++;
//	}
//}
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//typedef struct stu
//{
//	char name[10];
//	char sex[5];
//	int age;
//}stu;
//
////int cmp(const void* e1, const void* e2)//����������
////{
////	return strcmp(((stu*)e1)->name, ((stu*)e2)->name);
////}
//
//int cmp(const void* e1, const void* e2)//����������
//{
//	return ((stu*)e1)->age - ((stu*)e2)->age;
//}
//
//int main()//ʵ��һ��ͨ�õ�ð������
//{
//	//int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	struct stu s[] = { {"zhangsan","nan",18},{"lisi","nan",20},{"wangwu","nan",25} };
//	size_t sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %s %d\n", s[i].name,s[i].sex,s[i].age);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()//�ַ�������
//{
//	char arr1[10] = { 0 };
//	char *arr2 = "abcdefg";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	char* ret = str1;
//	while (*str1++=*str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()//�ַ�������
//{
//	char arr1[10] = { 0 };
//	char *arr2 = "abcdefg";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()//���ַ�������
//{
//	char arr[] = "abcdefg";
//	//int len = strlen(arr);
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//} ��

//#include<stdio.h>
//#include<string.h>
//
//char* my_strcat(char* str1,const char* str2)
//{
//	char* ret = str1;
//	while (*str1++);//�ҵ�str1��β��
//	str1--;
//	while (*str1++ = *str2++);
//	return str1;
//}
//
//int main()
//{
//	char arr1[15] = "abcde";
//	char arr2[] = "fghijk";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf(arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* tmp1 = str1;
//	char* tmp2 = str2;
//	while (1)
//	{
//		if (*str1 == '\0' || *str2 == '\0')
//			break;
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			str1 = ++tmp1;
//			str2 = tmp2;
//		}
//	}
//	if (*str2 == '\0')
//		return tmp1;
//	else
//		return NULL;
//}
//
//int main()
//{
//	char* str1 = "abcdefg";
//	char* str2 = "cde";
//	//char* str = strstr(str1, str2);
//	char* str = my_strstr(str1, str2);
//	if(str!=NULL)
//	printf(str);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int str1[] = {1,2,3,4,5,6,7};
//	int str2[] = {1,2,3,4,5,6,7};
//	//char* str2 = "acbde";
//	if (!memcmp(str1, str2,1*sizeof(int)))
//	{
//		printf("����������Ԫ����ͬ\n");
//	}
//	if (!memcmp(str1, str2, 3*sizeof(int)))
//		printf("��������ǰ����Ԫ����ͬ\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int my_memcmp(const void* str1, const void* str2, int n)
//{
//	char* p1 = (char*)str1;
//	char* p2 = (char*)str2;
//	while (n--)
//	{
//		if (*p1 != *p2)
//			break;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	//int str1[] = { 1,2,3,4,5,6,7 };
//	//int str2[] = { 1,2,3,4,5,6,7 };
//	char str1[] = "abcde";
//	char str2[] = "abcde";
//	if (!my_memcmp(str1, str2, 1))
//	{
//		printf("����������Ԫ����ͬ\n");
//	}
//	if (!my_memcmp(str1, str2, 3))
//		printf("��������ǰ����Ԫ����ͬ\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	memcpy(arr1, arr2, 9*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>

//void* my_memcpy(void* str1, const void* str2, int n)
//{
//	char* p1 = (char*)str1;
//	char* p2 = (char*)str2;
//	while (n--)
//	{
//		*p1++ = *p2++;
//	}
//	return str1;
//}
//
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	//memcpy(arr1, arr2, 9 * sizeof(int));
//	my_memcpy(arr1, arr2, 9 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
void* my_memmove(void* str1, const void* str2, int n)
{
	char* p1 = (char*)str1;
	char* p2 = (char*)str2;
	if (str1 < str2)
	{
		while (n--)//��ǰ��󿽱�
		{
			*p1++ = *p2++;
		}
	}
	else
	{
		while (n--)//�Ӻ���ǰ����
		{
			*(p1 + n) = *(p2 + n);
		}
	}
	return str1;
}
int main()
{
	int arr1[20] = { 0 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	//memmove(arr1, arr2, 9 * sizeof(int));
	my_memmove(arr1, arr2, 9 * sizeof(int));
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr1[i]);
	}
	my_memmove(arr1+2, arr1, 3 * sizeof(int));
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}