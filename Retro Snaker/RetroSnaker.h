#pragma once

#include<stdio.h>
#include<graphics.h>
#include<>

#define SNAKER 500 //蛇的最大长度


typedef struct Snaker {
	int size;//蛇的长度
	int dir;//蛇的移动方向
	int speed;//蛇的移动速度
	POINT coor;//蛇头的坐标
}Snaker;

typedef struct Food {
	POINT coor;//食物的坐标
}Food;
//void menu();