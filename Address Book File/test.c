#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"
void menu()
{
	printf("****   1. add     ****\n");
	printf("****   2. delete  ****\n");
	printf("****   3. search  ****\n");
	printf("****   4. modify  ****\n");
	printf("****   5. show    ****\n");
	printf("****   6. sort    ****\n");
	printf("****   7. save    ****\n");
	printf("****   0. exit    ****\n");
}
int main()//学生信息系统
{
	struct Con con;
	IntiContact(&con);
	int Input = 0;
	do
	{
		menu();
		scanf("%d", &Input);
		switch (Input)
		{
		case Add:
			AddContact(&con);
			break;
		case Delete:
			DelContact(&con);
			break;
		case Search:
			SearContact(&con);
			break;
		case Modify:
			ModifyConstact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Save:
			SaveContact(&con);
			break;
		case Exit:
			SaveContact(&con);
			printf("退出通讯录\n");
			break;
		default:printf("选择错误，请重新选择\n");
			break;
		}
		if (Input != 0)
		Sleep(650);
		if (Input == 1 || Input == 2 || Input == 4 )
			system("cls");
	} while (Input);
	free(con.data);
	con.data = NULL;
	return 0;
}
