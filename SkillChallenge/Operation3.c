//16、假设以某个雷达站所在位置为基点，坐标记为(0, 0)，侦察半径是R千米。
// 现有N个运动物体坐标（单位是千米），请计算有多少个运动物体会被雷达侦测到。 
// 输入说明：第一行是两个数N和R，分别表示运动物体的个数和侦察半径。接下来是N行分别输入运动物体的坐标（X, Y）。 
// 输出说明：N个运动物体中能够被雷达发现的个数。 输入样例：5 30 10 25 18 12 19 10 20 25 21 22 输出样例：3

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N , R;
//	int X[100], Y[100];
//	scanf_s("%d %d", &N, &R);
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d %d", &X[i], &Y[i]);
//	}
//	int count = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (pow(X[i], 2) + pow(Y[i], 2) <= R * R)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//17、输入正整数N和M (0< N < M <=100000)，请输出N到M（含N和M）之间能被2或3整除但不能被7整除的数的个数。
// 输入说明: 输入两个正整数N和M。 输出说明: 输出满足条件数的个数。 
//输入样例: 5 10 
// 输出样例: 4

//#include<stdio.h>
//#include<stdbool.h>
//bool tts(int i)
//{
//	if ((i % 2 == 0 || i % 3 == 0) && i % 7 != 0)
//		return true;
//	return false;
//}
//int count_1(int n, int m)
//{
//	int i ;
//	int count=0;
//	for (i = n; i <= m; i++)
//	{
//		if (tts(i))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int N, M;
//	scanf_s("%d %d", &N, &M);
//	if (0 < N && N < M && M <= 100000)
//	{
//		printf("%d",count_1(N, M));
//	}
//	else
//	{
//		printf("输入格式错误");
//	}
//}

//18、输入一行由字符a~z和A~Z组成的字符串，字符串长度<=10000，求其中任意两个字符出现次数的差值的绝对值 
// 输入： 第一行输入字符串 第二行输入两个字符。 
// 输出： 输出这两个字符出现次数的差值的绝对值 
// 输入样例： AbddeDfacd A d 
// 输出样例： 2 (解释:字符串中字符'A'出现了2次，字符'd'出现了4次，则结果为|2-4|=2)
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch[10001];
	int i;
	fgets(ch, sizeof(ch), stdin);
	fflush(stdin);
	char a, b;
	printf("请输入两个字符:>\n");
	scanf_s("%c", &a);
	getchar();
	scanf_s("%c", &b);
	int countA = 0, countB = 0;
	for (i = 0; ch[i]!='\0'; i++)
	{
		if (ch[i] == a || ch[i] == a + ('a' - 'A') || ch[i] == a - ('a' - 'A'))
			countA++;
		if (ch[i] == b || ch[i] == b + ('a' - 'A') || ch[i] == b - ('a' - 'A'))
			countB++;
	}
	int number = abs(countA - countB);
	printf("你输入的字符串为：%s\n", ch);
	printf("要寻找的字符：%c %c\n", a, b);
	printf("%c:%d %c:%d\n", a, countA, b, countB);
	printf("%d", number);
	return 0;
}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define size 10000
//int main()
//{
//    char words[size];
//    int i, y;
//    char ch1, ch2;
//    int count1 = 0;
//    int count2 = 0;
//
//    gets_s(words, size);
//    //if(words[i]=='\n')
//    //    words[i] = '\0'
//    scanf_s("%c", &ch1);
//    scanf_s("%c", &ch2);
//    for (i = 0; i < strlen(words); i++)
//    {
//        if (words[i] == ch1 || words[i] == ch1 + ('a' - 'A') || words[i] == ch1 - ('a' - 'A'))
//            count1++;
//        else if (words[i] == ch2 || words[i] == ch2 + ('a' - 'A') || words[i] == ch2 - ('a' - 'A'))
//            count2++;
//    }
//    y = abs(count1 - count2);
//    printf("%d", y);
//
//    return 0;
//}

//19、现有一个分数数列<img src="http://shixun.ncccu.org.cn/upload/image/20221213/20221213162613703528.jpg"
// an=(n^2)/(n+1)(n-1),a1=1
// contenteditable="false" style="font-size: 14px; max-width: 100%;"/>
// 请求其前n项之和，结果以小数的形式给出（显示到小数点后2位，不显示进行四舍五入）。
