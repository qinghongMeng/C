#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	char* arr = "abcdef";
//	*(arr + 3) = 'm';//error
//	printf("%s", arr);
//	return 0;
//}

////my_strcmp函数实现
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abcdrf";
//	printf("%d\n", my_strcmp(arr1, arr2));
//}

//strstr函数暴力实现
//int main()
//{
//	strstr();
//}


//库函数strtok的调用
//int main()
//{
//	char str[] = "1807636864@qq.com";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(str, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

////my_mumcpy函数实现
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	struct stu arr1[] = { {"张三",20},{"李四",18},{"王五",19} };
//	struct stu arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

////my_memmove函数实现
//void* my_memmove(void* dest, const void* src,int num)
//{
//	assert(dest && src);
//	void* temp = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			* (char*)dest = * (char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 3, arr + 6, 16);
//	return 0;
//}

////memset函数使用
//int main()
//{
//	char arr[10] = { 0 };
//	int arr1[10] = { 0 };
//	memset(arr, 1, 10);
//	memset(arr1, 1, 10);
//	return 0;
//}

////结构体内存对齐
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct s1 a1 = { 0 };
//	struct s2 a2 = { 0 };
//	printf("%d\n", sizeof(a1));
//	printf("%d\n", sizeof(a2));
//	return 0;
//}

//#pragma pack(1)设置默认对齐数
//#pragma pack()取消设置的默认对齐数

////位段 - 位指二进制位
//struct S
//{
//	int a:  3;//3个比特位
//	int b : 4;//4个比特位
//	int c : 5;
//	int d : 4;
//};
//
//int main()
//{
//	struct S s={0};
//	printf("%d\n", sizeof(s));
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%x %x %x %x", s.a, s.b, s.c, s.d);
//	return 0;
//}

//用联合体求电脑存储方式大端还是小端
int check_sys()
{
	union S
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1，表示大端；返回0，表示小端
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}