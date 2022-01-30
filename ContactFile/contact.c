#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_size * sizeof(PeoInfo)); 
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;//设置通讯录最初只有0个元素
	ps->capacity = DEFAULT_size;
	//把文件中已经存放的信息加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(Contact* ps);

//把文件中已经存放的信息加载到通讯录中
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//读取文件，放到通讯录中
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
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
	CheckCapacity(ps);//检测当前通讯录的容量，若满了增加空间，若不满，则不做
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	
	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的小标
	//找不到则返回-1
	pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
		printf("要删除的人不存在\n");
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SerchContact(const Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要查找的人的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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

void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//将通讯录中的数据写入文件
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}