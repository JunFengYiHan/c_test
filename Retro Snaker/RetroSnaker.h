#pragma once

#include<stdio.h>
#include<graphics.h>
//#include<>

#define SNAKER 500 //�ߵ���󳤶�


typedef struct Snaker {
	int size;//�ߵĳ���
	int dir;//�ߵ��ƶ�����
	int speed;//�ߵ��ƶ��ٶ�
	POINT coor[SNAKER];//�ߵ�����
}Snaker;

typedef struct Food {
	POINT coor;//ʳ�������
}Food;

enum Direction {
	UP,
	DOWN,
	RIGHT,
	LEFT,
};
//�߳�ʼ��
void GameInit(Snaker* snaker);
//������
void GameDraw(Snaker* snaker);
//���ƶ�
void SnakerMove(Snaker* snaker);
