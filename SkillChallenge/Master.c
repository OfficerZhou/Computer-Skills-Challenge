#include<stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; ++i < 2021; i++)//++i�Ƚ�i�����ٱȽ�
//	{
//		printf("%d\n", i);//���2��3��4~2018
//	}                     //i++��Ϊ2019�ٽ���ѭ����++i��Ϊ2020���㣬��i++��Ϊ2021��iΪ2021��++i��Ϊ2022
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	char a[] = "abc\013 345";//\000~777Ϊ�˽�����ռһ���ֽ�
//	printf("%s ",a);
//	return 0;
//}

//int main()
//{
//	char ch[] = { "Happy\02021" };//ch ���ڴ���ռ�õ��ֽ����� 9
//	printf("%s", ch);
//	return 0;
//}

//int main()
//{
//	char* s = "012";
//	int x = *s;     //s��ŵ������ַ���ASCII��
//	printf("%d\n", x);
//	return 0;
//}


////***************struct �ṹ��ؼ��� Stu�ṹ
//typedef struct St
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//struct Stu��������ΪStu
//
//int main()
//{
//	Stu s1 = {"��",20,"15355555555","��"};//�ֲ�����s
//	struct St s2 = { "��",20,"15355555555","��" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.tele);
//	return 0;
//}

//typedef struct St
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //struct Stu��������ΪStu
//void Print1(Stu s)
//{
//	printf("name: %s\n", s.name);
//	printf("age:  %d\n", s.age);
//	printf("tele: %s\n", s.tele);
//	printf("sex:  %s\n", s.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"12233445566","��" };
//	//��ӡ�ṹ������
//	Print1(s);//Print1�������ݴ���
//	Print2(&s);//Print2���ݵ�ַ��ʡ�ռ�
//	return 0;
//}

//int main()
//{
//	char s[100] ;
//	gets(s);        //���ַ������鸳ֵ
//	char* q = s; 
//	char* p = s;    //ָ��q��pָ���һ��Ԫ��
//	char t; 
//	while (*++q)    //q�ҵ��ַ������һ������ЧԪ��0
//		; 
//	q--;            //��һ�ҵ����һ������
//	while (p < q)   //�׵�ַ<ĩ��ַ��ֱ������ָ������
//	{ t = *p;
//	*p = *q;
//	*q = t; 
//	p++; 
//	q--; }
//	printf("%s", s);
//}