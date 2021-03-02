#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

char Iswin(char board[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (j = 0; j < COL; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'D';
}
void printchequerboard(char board[ROW][COL]) {
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++) {
		if (i == 0) {
			for (int k = 0; k < ROW; k++) {
				printf(" ---");
			}
			printf("\n");
		}
		for (j = 0; j < COL; j++) {
			if (j == 0) {
				printf("|");
			}
			printf(" %c ", board[i][j]);
			printf("|");
		}
		if (j == COL) {
			printf("\n");
			for (j = 0; j < ROW; j++) {
				printf(" ---");
			}
			if (1) {
				printf("\n");
			}
		}
	}
}
void playboard(char board[ROW][COL]) {
	int x = 0, y = 0;
	while (1) {
		printf("玩家走>:\n");
		printf("请输入坐标>:\n");
		scanf("%1d%1d", &x, &y);//考虑使用%1d格式化输入
		if (board[x-1][y-1] == ' ' && x <= ROW && y <= COL&& x> 0 && y > 0) {
			board[x-1][y-1] = '*';
			break;
		}
		else {
			printf("坐标非法或已被占用，请重新输入！\n");
		}
	}
	char ret = Iswin(board);
	//Sleep(500);
	system("cls");
	printchequerboard(board);
	if (ret == 'C') {
		printf("电脑走>:\n");
		while (1) {
			x = rand() % ROW;
			y = rand() % COL;
			if (board[x][y] == ' ') {
				board[x][y] = '#';
				break;
			}
		}
		Sleep(500);
		system("cls");
		printchequerboard(board);
		ret = Iswin(board);
	}
	if (ret == 'C') {
		playboard(board);
	}
	else if (ret == '*') {
		printf("玩家赢\n");
	}
	else if (ret == '#') {
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}
void voidchequerboard(char board[ROW][COL]) {
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}
void menu()
{
	printf("***********************\n");
	printf("*** 1.play  0.exit  ***\n");
	printf("***********************\n");
}
void playgame()
{
	printf("游戏开始！\n");
	Sleep(500);//待机0.5秒钟
	system("cls");//清空屏幕
}
