#pragma once

#define name_MAX 20
#define sex_MAX 5
#define tele_MAX 12
#define addr_Max 30


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<errno.h>

typedef struct Stu
{
	char name[name_MAX];
	int age;
	char sex[sex_MAX];
	char tele[tele_MAX];
	char addr[addr_Max];
}Stu;

typedef struct Con
{
	int size;
	int num;
	struct Stu* data;
}Con;

enum
{
	Exit,
	Add,
	Delete,
	Search,
	Modify,
	Show,
	Sort,
	Save
};

//��ʼ��
void IntiContact(struct Con* ps);
//������Ϣ
void AddContact(struct Con* ps);
//չʾ��Ϣ
void ShowContact(const struct Con* ps);
//ɾ����Ϣ
void DelContact(struct Con* ps);
//������Ϣ
void SearContact(const struct Con* ps);
//�޸���Ϣ
void ModifyConstact(struct Con* ps);
//������Ϣ
void SortContact(struct Con* ps);
//�����Ϣ���ļ�
void SaveContact(struct Con* ps);
//���ļ��ж�ȡ��Ϣ
void ReadinContact(struct Con* ps);