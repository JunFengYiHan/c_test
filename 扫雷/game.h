#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUM 10

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//打印菜单
void menu();
//提示
void playgame();
//初始化雷盘
void initboard(char board[ROWS][COLS], int rows, int cols, char ret);
//打印雷盘
void printboard(char board[ROWS][COLS], int row, int col);
//布置雷
void setmine(char board[ROWS][COLS], int mine_num, int row, int col);
//扫雷
void play(char mineboard[ROWS][COLS], char showboard[ROWS][COLS], int row, int col);