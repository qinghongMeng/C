#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//
////дһ��С�����������С�δ洢���Ǵ�˴洢
//int main()
//{
//	if (check_sys() == 1)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//}

////����Ŀ������������ֵת��������������-128��128��ת��Ϊchar�ͣ��ٰ�ʮ�����޷����������ֵһ��
//int main()
//{
//	char a = -128;
//	char b = 128;
//	printf("%u\n", a);
//	printf("%u\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a[10];
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = i;
//	}
//	printf("%d", strlen(a));
//}

//int main()
//{
//	char* p = "abcdef";//�����ַ��������ܸ���
//	//*p = 'w';
//	printf("%s", p);
//}

////һ�������⣬���ַ�������
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { "abcdef" };
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	if(p1==p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//}

////������ָ������ӡ�����е�ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (* p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

////&������ �� ������ ���Ǻ����ĵ�ַ
////����ָ��*p
//int main()
//{
//	printf("%p\n", &printf);
//	printf("%p\n", printf);
//	int(*p)(char*) = printf;
//	printf("%p\n", p);
//	//����ָ��ĵ���
//	(*p)("Hello,world\n");
//	return 0;
//}

////����ָ��������ϰ��
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char, const char) = my_strcpy;
//	char* (*pfArr[4])(char, const char);
//	return 0;
//}

////ð������ֻ�ܽ���������������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ð������ֻ�ܽ���������������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// //qsort����
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}

//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2) ;
//}
//
//void test2()
//{
//	float arr[] = { 8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}

struct stu {
	char name[10];
	short age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}


void test3()
{
	struct stu arr[3] = { {"����",20},{"����",18},{"����",28} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}
int main()
{
	test3();
	return 0;
}