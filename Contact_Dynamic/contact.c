#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo)); 
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
	ps->capacity = DEFAULT_size;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		PeoInfo* ptr=realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr)
		{
			ps->data = ptr;
			ps->capacity += 2;
		}
	}
}

void AddContant(Contact* ps)
{
	CheckCapacity(ps);//��⵱ǰͨѶ¼�����������������ӿռ䣬������������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	
	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}
void DelContant(Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص�С��
	//�Ҳ����򷵻�-1
	pos = FindByName(ps, name);
	//2.ɾ��
	if (pos == -1)
		printf("Ҫɾ�����˲�����\n");
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SerchContact(const Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}