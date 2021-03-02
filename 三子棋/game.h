#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3

//开始游戏
void playgame();
//打印菜单
void menu();
//初始化棋盘
void voidchequerboard(char board[ROW][COL]);
//打印棋盘
void printchequerboard(char board[ROW][COL]);
//开始下棋
void playboard(char board[ROW][COL]);
//判断输赢  返回*表示玩家赢，#表示电脑赢，返回C表示继续，返回D表示平局
char Iswin(char board[ROW][COL]);
