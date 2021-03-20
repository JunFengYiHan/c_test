#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*** 1.play        0.exit ***\n");
	printf("****************************\n");
}

void playgame()
{
	printf("游戏开始");
	Sleep(650);
	system("cls");
}

void initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

void printboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		if (1 == i)
		{
			for (j = 0; j <= col; j++)
			{
				printf(" %d", j);
			}
			printf("\n");
		}
		for (j = 1; j <= col; j++)
		{
			if (1 == j)
			{
				printf(" %d", i);
			}
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int mine_num, int row, int col)
{
	while (mine_num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			mine_num--;
		}
	}
}

int find(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	if (x > 0 && x < ROW && y > 0 && y < COL)
	{
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (board[i][j] == '1')
					count++;
			}
		}
	}
	return count;
}

void spread(char showboard[ROWS][COLS], char mineboard[ROWS][COLS], int x, int y, int* pn)
{
	showboard[x][y] = ' ';
	*pn += 1;
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			ret = find(mineboard, i, j);
			if (!ret && x > 0 && x <= ROW && y > 0 && y <= COL && showboard[i][j] == '*')
			{
				spread(showboard, mineboard, i, j, pn);
			}
			else if(ret)
			{
				showboard[i][j] = ret + '0';
			}
			else
			{
				showboard[i][j] = ' ';
			}
		}
	}
}

void play(char mineboard[ROWS][COLS], char showboard[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = 0;
	
	while (row*col-MINE_NUM-n)
	{
		printf("请输入坐标，以空格隔开输入>:");
		scanf("%d %d", &x, &y);
		if (x > ROW || y > COL || x < 1 || y < 1)
		{
			printf("坐标非法，请重新输入\n");
			continue;
		}
		if (mineboard[x][y] != '1')
		{
			int ret = find(mineboard, x, y);
			if (ret != 0)
			{
				showboard[x][y] = ret + '0';
				n++;
			}
			else
			{
				//showboard[x][y] = ' ';
				spread(showboard, mineboard, x, y, &n);
			}
			system("cls");
			printboard(showboard, row, col);
		}
		else
		{
			break;
		}
	}
	if (row * col - MINE_NUM - n)
	{
		printf("很遗憾，你被炸死了\n");	
	}
	else
	{
		printf("恭喜你，扫雷成功\n");
	}
	printboard(mineboard, row, col);
}