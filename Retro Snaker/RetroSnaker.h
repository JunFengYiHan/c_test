#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

#define SNAKER 500 //蛇的最大长度

//蛇
typedef struct Snaker {
	int size;//蛇的长度
	int dir;//蛇的移动方向
	int speed;//蛇的移动速度
	POINT coor[SNAKER];//蛇的坐标
}Snaker;

//食物
typedef struct Food {
	POINT coor;//食物的坐标
}Food;

//蛇的方向
enum Direction {
	UP,
	DOWN,
	RIGHT,
	LEFT,
};

//蛇初始化
void GameInit(Snaker* snaker);
//绘制蛇 
void GameDraw(Snaker* snaker);
//蛇移动
void SnakerMove(Snaker* snaker);
//键盘输入改变方向
void keyboard(Snaker* snaker);
