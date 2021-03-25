#define _CRT_SECURE_NO_WARNINGS

//冒泡排序的实质是，数组相邻元素两两比较，若不符合要排序顺序。则交换两个元素，每一次遍历数组都让一个元素到它该出现的位置，这个过程称为冒泡，n个元素n-1趟冒泡即可将所有元素排成所需顺序。
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1 ,3,5,7,9,2,4,6,8,0 };//假设arr为要排序的数组，排成升序
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)//sz-1防止越界，-i减少时间复杂度
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
//	//c d 交换位置形成不同字符串
//	char arr2[] = "abdce";
//	//c d 再次交换还原字符串
//	char arr3[] = "abcde";
//	if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1和arr2相同\n");
//	}
//	else
//	{
//		printf("arr1和arr2不同\n");
//	}
//	if (strcmp(arr1, arr3) == 0)
//	{
//		printf("arr1和arr3相同\n");
//	}
//	else
//	{
//		printf("arr1和arr3不同\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);//对传入的指针的进行断言
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
//	//c d 交换位置形成不同字符串
//	char arr2[] = "abdce";
//	//c d 再次交换还原字符串
//	char arr3[] = "abcde";
//	if (my_strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1和arr2相同\n");
//	}
//	else
//	{
//		printf("arr1和arr2不同\n");
//	}
//	if (my_strcmp(arr1, arr3) == 0)
//	{
//		printf("arr1和arr3相同\n");
//	}
//	else
//	{
//		printf("arr1和arr3不同\n");
//	}
//	return 0;
//}