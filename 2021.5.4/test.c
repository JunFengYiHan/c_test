#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//char* my_strncat(char* str1, const char* str2, int n) {
//	char* ret = str1;
//	while (*ret != '\0') {
//		ret++;
//	}
//	while (n-- && *str2) {
//		*ret = *str2;
//		ret++;
//		str2++;
//	}
//	return str1;
//}
//
//int main()
//{
//	char arr[10] = "abc";
//	char* str1 = "def";
//	my_strncat(arr, str1, 3);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//
//char* my_strncpy(char* str1, const char* str2,int n) {
//	char* ret = str1;
//	while (n-- && (*ret++ = *str2++)) {
//		;
//	}
//	return str1;
//}
//
//int main()
//{
//	char arr[10] = "abc";
//	char* str1 = "def";
//	my_strncpy(arr, str1, 3);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,5,4,3,2,1 };
//	int find = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++) {
//		find ^= arr[i];
//	}
//	printf("%d", find);
//	malloc
//	return 0;
//}

#define offsetof(type,x) (int)(&(((type*)0)->x))

#include<stdio.h>

int main ()
{

	return 0;
}