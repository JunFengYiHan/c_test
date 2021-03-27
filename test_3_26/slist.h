#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int slistdatatype;
typedef struct slistnode {
	slistdatatype data;
	struct slistnode* next;
}slistnode;
void slpushback(slistnode** pphead, slistdatatype x);//Œ≤≤Â
void slpopback(slistnode** pphead);
//void slpushfront(slistnode** pphead, slistdatatype x);
//void slpophfront(slistnode** pphead);
void slprint(slistnode* phead);//¥Ú”°¡¥±Ì