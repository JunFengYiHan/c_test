#pragma once

#include<stdio.h>
#include<graphics.h>
//#include<>

#define SNAKER 500 //蛇的最大长度


typedef struct Snaker {
	int size;//蛇的长度
	int dir;//蛇的移动方向
	int speed;//蛇的移动速度
	POINT coor[SNAKER];//蛇的坐标
}Snaker;

typedef struct Food {
	POINT coor;//食物的坐标
}Food;

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
