#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define SNAKER 500 //�ߵ���󳤶�
#define LENGTH 720 //��ʾ�ĳ�
#define WIDTH  520 //��ʾ�Ŀ�

//��
typedef struct Snaker {
	int size;//�ߵĳ���
	int dir;//�ߵ��ƶ�����
	int speed;//�ߵ��ƶ��ٶ�
	int s;//���ٺ���ˢ��һ�Σ��γɿɱ���.
	int r;//�ߵİ뾶
	POINT coor[SNAKER];//�ߵ�����
}Snaker;

//ʳ��
typedef struct Food {
	POINT coor;//ʳ�������
//	int flag;//��ʾʳ���Ƿ����
	int r;//ʳ��İ뾶
	int color;//ʳ�����ɫ
}Food;

//�ߵķ���
enum Direction {
	UP,
	DOWN,
	RIGHT,
	LEFT,
};

//��ʼ���ߺ�ʳ��
void Init(Snaker* snaker, Food* food);
//�����ߺ�ʳ��
void GameDraw(Snaker* snaker, Food* food);
//���ƶ�
void SnakerMove(Snaker* snaker);
//��������ı䷽��
void Keyboard(Snaker* snaker);
//�߳Զ���
void EatFood(Snaker* snaker, Food* food);
//��ͣѡ��˵�����
void Esc();