#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

////��������
//void swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;
//		e2++;
//	}
//}
//
////ð������������������������
//void bubble_sort(void* arr, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//				swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//
//		}
//	}
//}
//
//
////�Զ���ȽϺ���
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//void test2()
//{
//	float arr[] = { 8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}
//
//struct stu {
//	char name[10];
//	short age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//
//void test3()
//{
//	struct stu arr[3] = { {"����",20},{"����",18},{"����",28} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
//int main()
//{
//	p = (struct Text*)0x100000;
//	printf("%d\n", sizeof(struct Test));
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//�Ե�ַ��ʽ��ӡ
//	printf("%x\n", (unsigned long)p + 0x1);//��16������ʽ��ӡ
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(3,4) };//���ű��ʽ�������ʼ��Ϊ{1��3��5}
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

//int main()
//{
//	char arr[256] = { 0 };
//	//*scanf("%s", arr);
//	gets(arr);//��ȡһ�У����Դ��ո�
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////ʵ��һ�����������������ַ����е�k���ַ�
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDBA
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	char* tmp = arr;
//	for (i = 0; i < k; i++)
//	{
//		//һ������
//		char temp = *arr;	
//		while (*(++arr))
//		{
//			*(arr - 1) = *arr;		
//		}
//		*(arr - 1) = temp;
//		arr = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}

////дһ���������ж��ַ���2�ǲ������ַ���1��ת������
//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str1);
//	if (len1 != len2)
//		return 0;
//	//����str1���
//	//strcat(str1,str1)  error
//	strncat(str1, str1, len1);
//	//�ж�str2�Ƿ���str1���Ӵ�
//	char* ret=strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}

//��һ�����־��󣬾����ÿ�д����ҵ�����ÿ�д��ϵ��µ��������д�����������ľ����в���ĳ�������Ƿ����
int check_num(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while (y >= 0&&x<=*row-1)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = check_num(arr,k,&x,&y);
	if (ret == 1)
		printf("���ڣ��±�Ϊ%d,%d\n",x,y);
	else
		printf("������\n");
}