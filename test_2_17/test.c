#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()//猜凶手
//{
//	char cut = 0;
//	for (cut = 'a'; cut <= 'd'; cut++)
//	{
//		if ((cut != 'a') + (cut == 'c') + (cut == 'd') + (cut != 'd')==3)
//			printf("%c\n", cut);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) ^ (a == 3)) && ((b == 2) ^ (e == 4)) && ((c == 1) ^ (d == 2)) && ((c == 5) ^ (d == 3)) && ((e == 4) ^ (a == 1)))
//						{
//							if(a*b*c*d*e==120)
//							printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char a;
//	int n;
//	char b;
//};
//struct stud
//{
//
//	char a;
//	char b;
//	int n;
//};
//int main()//验证结构体内存对齐
//{
//	struct stu s1 = { 0 };
//	struct stud s2 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}
