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
	struct PeoInfo* data;//存放1000个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;

//初始化通讯录
void InitContact(Contact* ps);
//增加联系人
void AddContant(Contact* ps);
//联系人目录
void ShowContact(const Contact*ps);
//删除联系人
void DelContant(Contact* ps);
//搜索联系人
void SerchContact(const Contact* ps);
//
void DestroyContact(Contact* ps);
//保存文件
void SaveContact(Contact* ps);
//把文件中已经存放的信息加载到通讯录中
void LoadContact(Contact* ps);