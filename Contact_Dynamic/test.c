#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("*******************************************************\n");
	printf("*************** 1. add           2. del ***************\n");
	printf("*************** 3. search        4. modify ************\n");
	printf("*************** 5. show          6. sort **************\n");
	printf("*************** 0. exit                  **************\n");
	printf("*******************************************************\n");
}



int main()
{
	int input = 0;
	//创建通讯录
	int size = 0;
	struct Contact con;//con就是通讯录，里面包含：data指针和size,capacity
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContant(&con);
			break;
		case DEL:
			DelContant(&con);
			break;
		case SEARCH:
			SerchContact(&con);
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			DestroyContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}