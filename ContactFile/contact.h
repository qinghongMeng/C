#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_size 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE,
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo* data;//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* ps);
//������ϵ��
void AddContant(Contact* ps);
//��ϵ��Ŀ¼
void ShowContact(const Contact*ps);
//ɾ����ϵ��
void DelContant(Contact* ps);
//������ϵ��
void SerchContact(const Contact* ps);
//
void DestroyContact(Contact* ps);
//�����ļ�
void SaveContact(Contact* ps);
//���ļ����Ѿ���ŵ���Ϣ���ص�ͨѶ¼��
void LoadContact(Contact* ps);