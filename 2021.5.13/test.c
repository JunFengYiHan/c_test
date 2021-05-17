#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//typedef struct Player {
//	int number;
//	char name[21];
//	int score;
//}Player;
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	Player arr[10] = { 0 };
//	for (i = 0; i < n; i++) {
//		scanf("%d %s %d", &arr[i].number, &arr[i].name, &arr[i].score);
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d %s ", arr[i].number, arr[i].name);
//		if (arr[i].score >= 90) {
//			count++;
//			printf("S");
//		}
//		else if(arr[i].score>=80){
//			printf("A");
//		}else if(arr[i].score>=70){
//			printf("B");
//		}else{
//			printf("C");
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//
//typedef struct Student {
//	int number;
//	char name[21];
//	double score;
//}Student;
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	Student arr[100] = { 0 };
//	for (i = 0; i < n; i++) {
//		scanf("%d %s %lf", &arr[i].number, &arr[i].name, &arr[i].score);
//	}
//	double sum = 0.0;
//	double average = 0.0;
//	for (i = 0; i < n; i++) {
//		sum += arr[i].score;
//		if (arr[i].score < 60) {
//			count++;
//		}
//	}
//	average = sum / n;
//	printf("%.2f %.2f %d\n", sum, average, count);
//	return 0;
//}

#include<stdio.h>

typedef struct Student {
	char name[21];
	char phone[12];
}Student;

int main()
{
	Student arr[100] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int  i = 0;
	for (i = 0; i < n; i++) {
		scanf("%s %s", &arr[i].name, &arr[i].phone);
	}
	printf("+---------------------------------------------+|");
	printf("| name                 | phone                |");
	printf("+---------------------- + ---------------------- + ");
	for (i = 0; i < n; i++) {
		printf("| %21s                 | %21s                |", arr[i].name, arr[i].phone);
		printf("+---------------------- + ---------------------- +");
	}
	return 0;
}

//struct student
//{
//    int no;
//    char name[20];
//    char sex;
//    struct {
//        int year;
//        int month;
//        int day;
//    }birth;
//};
//struct student s;
//struct {
//    int len;
//    char* str;
//} *p;
//int main()
//{
//    sizeof
//    return 0;
//}

//#include<stdio.h>
//#define MAXN 100
//struct student {
//    char name[20];
//    int score;
//};
//void cnt_score(struct student* p, int n);
//
//int main()
//{
//    int i, n;
//    struct student stu[MAXN];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%s%d", stu[i].name, &stu[i].score);
//    }
//    cnt_score(stu, n);
//
//    return 0;
//}
//void cnt_score(struct student* p, int n)
//{
//    int cnt_a = 0, cnt_p = 0, cnt_f = 0;
//    struct student* q = p + n - 1;
//    while (p <= q) {
//        if (p->score >= 80 && p->score <= 100) cnt_a++;
//        else if (p->score >= 60 && p->score <= 79) cnt_p++;
//        else cnt_f++;
//        p++;
//    }
//    printf("%d %d %d\n", cnt_a, cnt_p, cnt_f);
//}

//#include <stdio.h>
//struct ps {
//	double i;
//	char arr[24];
//};
//int main() {
//	struct ps bt;
//	printf("bt size:%u\n",sizeof(bt));
//	return 0;
//}