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
	//����ͨѶ¼
	int size = 0;
	struct Contact con;//con����ͨѶ¼�����������dataָ���size,capacity
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}