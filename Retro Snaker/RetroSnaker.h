#pragma once

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

#define SNAKER 500 //�ߵ���󳤶�

//��
typedef struct Snaker {
	int size;//�ߵĳ���
	int dir;//�ߵ��ƶ�����
	int speed;//�ߵ��ƶ��ٶ�
	POINT coor[SNAKER];//�ߵ�����
}Snaker;

//ʳ��
typedef struct Food {
	POINT coor;//ʳ�������
}Food;

//�ߵķ���
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
//��������ı䷽��
void keyboard(Snaker* snaker);
