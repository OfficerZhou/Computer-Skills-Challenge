#include<stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; ++i < 2021; i++)//++i先将i自增再比较
//	{
//		printf("%d\n", i);//输出2，3，4~2018
//	}                     //i++变为2019再进入循环，++i变为2020满足，再i++变为2021，i为2021，++i变为2022
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	char a[] = "abc\013 345";//\000~777为八进制数占一个字节
//	printf("%s ",a);
//	return 0;
//}

//int main()
//{
//	char ch[] = { "Happy\02021" };//ch 在内存中占用的字节数是 9
//	printf("%s", ch);
//	return 0;
//}

//int main()
//{
//	char* s = "012";
//	int x = *s;     //s存放的是首字符的ASCII码
//	printf("%d\n", x);
//	return 0;
//}


////***************struct 结构体关键字 Stu结构
//typedef struct St
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//struct Stu重新起名为Stu
//
//int main()
//{
//	Stu s1 = {"周",20,"15355555555","男"};//局部变量s
//	struct St s2 = { "张",20,"15355555555","男" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.tele);
//	return 0;
//}

//typedef struct St
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //struct Stu重新起名为Stu
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
//	Stu s = { "李四",40,"12233445566","男" };
//	//打印结构体数据
//	Print1(s);//Print1复制数据传递
//	Print2(&s);//Print2传递地址节省空间
//	return 0;
//}

//int main()
//{
//	char s[100] ;
//	gets(s);        //给字符串数组赋值
//	char* q = s; 
//	char* p = s;    //指针q，p指向第一个元素
//	char t; 
//	while (*++q)    //q找到字符串最后一个非有效元素0
//		; 
//	q--;            //减一找到最后一个数组
//	while (p < q)   //首地址<末地址，直到两个指针相遇
//	{ t = *p;
//	*p = *q;
//	*q = t; 
//	p++; 
//	q--; }
//	printf("%s", s);
//}