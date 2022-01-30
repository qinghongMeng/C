#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s",strerror(errno));
//		return 0;
//	}
//	////写文件-w
//	//fputc('b',pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c",ch);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//int main()
//{
//	char buf[102] = { 0 };
//
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	};
//	//读一行文件
//	fgets(buf, 102, pf);
//	puts(buf);//自己会换行
//	fgets(buf, 102, pf);
//	puts(buf);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//int main()
//{
//	char buf[102] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	};
//	//写一行文件
//	fputs("hello\n", pf);//不会自己换行
//	puts(buf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	//fputs(buf, stdout);
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//		return 0;
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//格式化输出函数
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);//格式化输入函数，按格式将文件里的数据读入
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 100,3.14f,"abcdef"};
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//将格式化的数据转换成字符串存储到buf
//	sprintf(buf,"%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

int main()
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	return 0;
}