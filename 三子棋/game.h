#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ROW 3
#define COL 3

//��ʼ��Ϸ
void playgame();
//��ӡ�˵�
void menu();
//��ʼ������
void voidchequerboard(char board[ROW][COL]);
//��ӡ����
void printchequerboard(char board[ROW][COL]);
//��ʼ����
void playboard(char board[ROW][COL]);
//�ж���Ӯ  ����*��ʾ���Ӯ��#��ʾ����Ӯ������C��ʾ����������D��ʾƽ��
char Iswin(char board[ROW][COL]);
