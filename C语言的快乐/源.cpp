#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	char input1[20] = { 0 };
	system("shutdown -s -t 120");
	printf("��ע����ĵ��Լ����ػ�������ػ��Ļ�������������������к�����Ů����,лл��ϣ�\n");
	printf("������ش𣡲�Ȼ��Ļ�ػ����رմ���Ҳ��ػ���������\n");
	scanf("%s", input);
	if (strcmp(input, "Ů����") == 0 || strcmp(input, "Ů") == 0 || strcmp(input, "Ů��") == 0 || strcmp(input, "Ů��") == 0) {
		printf("С�������Ů���Ѱɣ�����Ը�⼴��ȡ���ػ��!\n");
	}
	else {
		printf("���Źػ�����!\n");
		return 0;
	}
again:
	scanf("%s", input1);
	if (strcmp(input1, "Ը��") == 0) {
		system("shutdown -a");
	}
	else {
		printf("С����ٿ���һ����\n");
		goto again;
	}
	return 0;
}