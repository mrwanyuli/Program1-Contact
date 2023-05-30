#pragma once
#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>
#include <assert.h>

#define MAX 100

//类型的声明
//人的信息
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
	
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人的个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加人到通讯录
void AddContact(Contact* pc);

//显示通讯录信心
void ShowContact(const Contact* pc);//加个const来保护，因为不修改只是展示

//删除通讯录联系人
void DelContact(Contact* pc);








