#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = s + a));
//	printf("%d", s);
//	return	0;
//}

//int main()
//{
//	int a = 0;
//	//按位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111取反，该值仍为补码
//	//10000000000000000000000000000001减1取反后得到原码，打印出来的是原码
//	printf("%d", ~a);//-1
//}

//将11=00000000000000000000000000001011中倒数第三位0变成1
//int main()
//{
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100——相当于将1向左移两位
//	//进行|操作即可
//	//00000000000000000000000000001111
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//返回原值11
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011——可看作~00000000000000000000000000000100,即~(1<<2)
//	//进行&操作即可
//	//00000000000000000000000000001011
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a=0,因此结果必为0，后面的&&操作不再进行，所以b,c,d值无变化
//	printf("%d,%d,%d,%d\n", a, b, c, d);
//	return 0;
//}

////隐式类型转换，有符号数按符号位提升，无符号数直接补0
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//3转化为char，将00000011放入,a=00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//b=01111111
//	char c = a + b;
//	//00000011
//	//01111111
//	//提升后
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//相加
//	//00000000000000000000000010000010
//	//c是char类型，截断，c=10000010
//	//打印成%d，要按整形提升，补1
//	//11111111111111111111111110000010——补码
//	//11111111111111111111111110000001——反码
//	//10000000000000000000000001111110——原码
//	//c=-126
//	printf("%d\n", c);
//}

////问题代码
//int main()
//{
//	int i = 1;
//	int a = (++i)+(++i) +(++i);
//	printf("%d", a);
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//int* pa = arr;
//	char* pa = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//////指针实现求字符串长度
////int strlen(char* str)
////{
////	char* start = str;
////	char* end = str;
////	while (*end != '\0')
////	{
////		end++;
////	}
////	return end - start;
////}
//////计数器实现：
////int strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////递归实现：不创建临时变量的计数器
////strlen(char* str)
////{
////	while (*str != '\0')
////	{
////		return 1 + strlen(str + 1);
////	}
////	return 0;
////}
//int main()
//{
//	char str[] = {"Hello,world!"};
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}
//int count_bit_one(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}

//int count_bit_one(int num)
//{
//	int count = 0;
//	int count1 = 0;
//	while (count1<32)
//	{
//		if (1 == (num & 1))
//		{
//			count++;
//		}
//		num =num>>1;
//		count1++;
//	}
//	return count;
//}

//int count_bit_one(int num)
//{
//	int count = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		if (1 == (num & 1))
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}

//int count_bit_one(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int n=count_bit_one(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_bit_one(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count=count_bit_one(tmp);
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}

//void print_table(int n)//递归实现乘法表
//{
//	if(n>0)
//	{
//		print_table(n - 1);
//		printf("\n");
//		for (int i = 1; i<=n; i++)
//		{
//			printf("%d*%d=%3d ", n, i, n * i);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

