#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void game()
{
	playgame();
	char mineboard[ROWS][COLS] = { 0 };//存放雷的数组
	char showboard[ROWS][COLS] = { 0 };//展示信息的数组
	initboard(mineboard, ROWS, COLS, '0');
	//printboard(mineboard, ROW, COL);
	initboard(showboard, ROWS, COLS, '*');
	printboard(showboard, ROW, COL);
	setmine(mineboard, MINE_NUM, ROW, COL);
	//printboard(mineboard, ROW, COL);
	play(mineboard, showboard, ROW, COL);

}

int main()
{
	int Input = 0;
	do 
	{
		srand((unsigned int)time(NULL));//随机数的种子
		menu();
		printf("请选择>:");
		scanf("%d", &Input);
		switch (Input)
		{
		case 1:game(); 
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误，请重新选择\n");
			break;
		}
	} while (Input);
	return 0;
}