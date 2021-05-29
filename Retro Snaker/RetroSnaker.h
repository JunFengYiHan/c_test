#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define SNAKER 500 //蛇的最大长度
#define LENGTH 720 //显示的长
#define WIDTH  520 //显示的宽

//蛇
typedef struct Snaker {
	int size;//蛇的长度
	int dir;//蛇的移动方向
	int speed;//蛇的移动速度
	int s;//多少毫秒刷新一次，形成可变速.
//	int r;//蛇的半径圆形蛇
//	int color;//蛇的颜色
	int a;//蛇的边长
	int flag;//标记蛇的生产状态
	int grade;
	POINT coor[SNAKER];//蛇的坐标
}Snaker;

//食物
typedef struct Food {
	POINT coor;//食物的坐标
	int flag;//表示食物是否存在，圆形蛇
//	int r;//食物的半径
	int a;//食物的边长
	int color;//食物的颜色
}Food;

//蛇的方向
enum Direction {
	UP,
	DOWN,
	RIGHT,
	LEFT,
};
int menu();
//初始化蛇和食物
void Init(Snaker* snaker, Food* food);
//绘制蛇和食物
void GameDraw(Snaker* snaker, Food* food);
//蛇移动
void SnakerMove(Snaker* snaker);
//键盘输入改变方向
void Keyboard(Snaker* snaker);
//蛇吃东西
void EatFood(Snaker* snaker, Food* food);
//蛇死亡
void SnakerDie(Snaker* snaker, Food* food);
//暂停选择菜单功能
void Esc();
