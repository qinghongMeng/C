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
//	////д�ļ�-w
//	//fputc('b',pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c",ch);
//	//�ر��ļ�
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
//	//��һ���ļ�
//	fgets(buf, 102, pf);
//	puts(buf);//�Լ��ỻ��
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
//	//дһ���ļ�
//	fputs("hello\n", pf);//�����Լ�����
//	puts(buf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
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
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//��ʽ���������
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
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);//��ʽ�����뺯��������ʽ���ļ�������ݶ���
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
//	//����ʽ��������ת�����ַ����洢��buf
//	sprintf(buf,"%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

int main()
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	return 0;
}