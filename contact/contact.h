#pragma once
#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>
#include <assert.h>

#define MAX 100

//���͵�����
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
	
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ���˵ĸ���
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����˵�ͨѶ¼
void AddContact(Contact* pc);

//��ʾͨѶ¼����
void ShowContact(const Contact* pc);//�Ӹ�const����������Ϊ���޸�ֻ��չʾ

//ɾ��ͨѶ¼��ϵ��
void DelContact(Contact* pc);








