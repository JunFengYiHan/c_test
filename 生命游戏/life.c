#define _CRT_SECURE_NO_WARNINGS

#include"life.h"

void init(char arr[ROWS][COLS], char ret) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if (rand() % 2)
				arr[i][j] = ret;
			else
				arr[i][j] = ' ';
		}
	}
}

void ptintArr(char arr[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 1; i < ROW; i++) {
		for (j = 1; j < COL; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

void isSurvival(char arr[ROW][COL]) {
	int i = 0;
	int j = 0;
	for (i = 1; i < ROW; i++) {
		for (j = 1; j < COL; j++) {
			if ((arr[i - 1][j - 1] == '*') + (arr[i - 1][j] == '*') + (arr[i - 1][j + 1] == '*')
				+ (arr[i][j - 1] == '*') + (arr[i][j] == '*') + (arr[i][j + 1] == '*')
				+ (arr[i + 1][j - 1] == '*') + (arr[i + 1][j] == '*') + (arr[i + 1][j + 1] == '*') != 3) {
				arr[i][j] = ' ';
			}
		}
	}
}