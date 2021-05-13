#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];
	char author[20];
	int price;
};

struct Table
{
	int n:2;//分配两个bit位

	struct Book book2;
};

struct S1
{
	char c1;//1 byte
	int i;//4byte
	char c2;//1byte
};


int main()
{
	printf("%d\n", sizeof(struct S1));



	struct Book book1 = { "C语言程序设计","何钦铭",40 };//初始化
	printf("%s %s %d\n", book1.name, book1.author, book1.price);

	struct Table table1;
	table1.n = 1;//编号赋值
	strcpy(table1.book2.name, "C语言程序设计");//不能直接操作整个数组赋值
	strcpy(table1.book2.author, "何钦铭");     //所以借助库函数完成赋值
	table1.book2.price = 40;

	printf("%d %s %s %d\n", table1.n, table1.book2.name, table1.book2.author, table1.book2.price);
	return 0;
}

//#include<stdio.h>
//
//enum Day
//{
//	Mon = 1,
//	Tues,
//	Wed,
//	Thur = 40,
//	Fri,
//	Sat,
//	Sun
//};
//
//int main()
//{
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//	return 0;
//}


//
//
//
//#include<stdio.h>
//
//union Un{
//	char ch;
//	int n;
//};
//int main()
//{
//	union Un un;
//	un.n = 1;
//	if (un.ch == 1) {
//		printf("小端");
//	}
//	else {
//		printf("大端");
//	}
//	return 0;
//}


//union MyUnion
//{
//	int i;
//	short sh;
//};
//int main()
//{
//	union MyUnion un;
//	un.i = 10;
//	printf("%d %hd\n", un.i, un.sh);
//	un.sh = 0;
//	printf("%d %hd\n", un.i, un.sh);
//
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	char arr[100] = { 0 };
//	int i = 0;
//	while ((arr[i]=getchar()) != '\n') {
//		i++;
//	}
//	int n = i ;
//	for (i = 0; i < n; i++) {
//		if (arr[i] >= 'a' && arr[i] <= 'c' || arr[i] >= 'A' && arr[i] <= 'C') {
//			printf("2");
//		}
//		else if (arr[i] >= 'd' && arr[i] <= 'f' || arr[i] >= 'D' && arr[i] <= 'F') {
//			printf("3");
//		}
//		else if (arr[i] >= 'g' && arr[i] <= 'i' || arr[i] >= 'G' && arr[i] <= 'I') {
//			printf("4");
//		}
//		else if (arr[i] >= 'j' && arr[i] <= 'k' || arr[i] >= 'J' && arr[i] <= 'K') {
//			printf("5");
//		}
//		else if (arr[i] >= 'm' && arr[i] <= 'o' || arr[i] >= 'M' && arr[i] <= 'O') {
//			printf("6");
//		}
//		else if (arr[i] >= 'p' && arr[i] <= 's' || arr[i] >= 'P'&& arr[i] <= 'S') {
//			printf("7");
//		}
//		else if (arr[i] >= 't' && arr[i] <= 'v' || arr[i] >= 'T' && arr[i] <= 'V') {
//			printf("8");
//		}
//		else if (arr[i] >= 'w' && arr[i] <= 'z' || arr[i] >= 'W' && arr[i] <= 'Z') {
//			printf("9");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void Move(char* str1, char* str2) {
//	while (str1 < str2) {
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2--;
//	}
//}
//
//void Right_Move(char arr[], int n) {
//	int len = strlen(arr);
//	n %= len;
//	Move(arr, arr + len - n - 1);
//	Move(arr + len - n , arr + len - 1);
//	Move(arr, arr + len - 1);
//}
//
//int main()//右旋字符串
//{
//	int n = 0;
//	char arr[1001] = { 0 };
//	
//	scanf("%d", &n);
//	//gets(arr);
//	getchar();
//	scanf("%s", &arr);
//	Right_Move(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}
//a b c d e 右移
//c b a e d
//d e a b c
//
//a b c d e 左移
//b a e d c
//c d e a b

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    int t = 0;
//    int i = 0;
//    int big_ch = 0;
//    int small_ch = 0;
//    int let = 0;
//    int digit = 0;
//    char arr[21] = { 0 };
//    scanf("%d", &t);
//    getchar();
//    for (i = 0; i < t; i++) {
//        big_ch = 0;
//        small_ch = 0;
//        let = 0;
//        digit = 0;
//        gets(arr);
//        int len = strlen(arr);
//        if (arr[0] < 'A' || arr[0]>'Z' || len > 16 || len < 6) {
//            printf("No\n");
//            continue;
//        }
//        for (int j = 0; j < len; j++) {
//            if (arr[j] == '@' || arr[j] == '#' || arr[j] == '$' || arr[j] == '%' || arr[j] == '^' || arr[j] == '&' || arr[j] == '*') {
//                let++;
//            }
//            if (arr[j] >= 'A' && arr[j] <= 'Z') {
//                big_ch++;
//            }
//            if (arr[j] >= 'a' && arr[j] <= 'z') {
//                small_ch++;
//            }
//            if (arr[j] >= '0' && arr[j] <= '9') {
//                digit++;
//            }
//        }
//        if (let == 0 || big_ch == 0 || small_ch == 0 || digit == 0) {
//            printf("No\n");
//        }
//        else {
//            printf("Yes\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char flag[5] = { 0 };
//    char arr[12] = { 0 };
//    int count_phone = 0;
//    int count = 0;
//    int first = 0;
//    scanf("%s", flag);
//    getchar();
//    while (scanf("%s", arr)) {
//        getchar();
//        if (arr[0] == '.') break;
//        count_phone++;
//        char ch[5] = { 0 };
//        for (int j = 3; j < 7; j++) {
//            ch[j - 3] = arr[j];
//        }
//        if (!strcmp(flag, ch)) {
//            if (!count) first = count_phone;
//            count++;
//        }
//    }
//    printf("%d\n", count_phone);
//    printf("%d %d\n", first, count);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, n, k, j;
//    char a[1001];
//    char temp;
//    scanf("%d", &n);
//    k = 0;
//    getchar();
//    while ((a[k] = getchar()) != '\n') {
//        k++;
//    }
//    a[k] = '\0';
//    for (i = 1; i <= n; i++) {
//        j = 0;
//        while (j < k - 1) {
//            temp = a[j];
//            a[j] = a[k - 1];
//            a[k - 1] = temp;
//            j++;
//        }
//    }
//    for (i = 0; a[i] != '\0'; i++) {
//        printf("%c", a[i]);
//    }
//    return 0;
//}
