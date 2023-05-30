#include "contact.h"


void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//��data����ʼ��sizeof���ֽڳ��Ƚ�����������
}

void AddContact(Contact* pc)
{
	assert(pc);//�����Ƿ�Ϊ��ָ��
	if (pc->count == MAX)
	{
		printf("ͨѶ¼���ˣ��޷����\n");
		return;
	}
	printf("����������\n");
	scanf("%s", pc->data[pc->count].name);

	printf("����������\n");
	scanf("%d",& pc->data[pc->count].age);

	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->count].sex);

	printf("������绰\n");
	scanf("%s", pc->data[pc->count].tele);

	printf("�������ַ\n");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�");
}


void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");//�������ϡ�-���ţ�һ������=�����ַ�
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr
		);
	}
}

static int FindByName(Contact* pc, char name[]) //static���κ�����Դ�ļ�������ʹ�øú���
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name,name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	int i = 0;
	char name[20] = { 0 };
	assert(pc);
	if(pc->count == 0)
	{
		printf("û����Ϣ����ɾ��");
		return;
	}
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);
	//ɾ��
	//1������
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����");
		return;
	}
	//2��ɾ��
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�");
}







