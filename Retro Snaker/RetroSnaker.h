#pragma once

#include<stdio.h>
#include<graphics.h>
#include<>

#define SNAKER 500 //�ߵ���󳤶�


typedef struct Snaker {
	int size;//�ߵĳ���
	int dir;//�ߵ��ƶ�����
	int speed;//�ߵ��ƶ��ٶ�
	POINT coor;//��ͷ������
}Snaker;

typedef struct Food {
	POINT coor;//ʳ�������
}Food;
//void menu();