//16��������ĳ���״�վ����λ��Ϊ���㣬�����Ϊ(0, 0)�����뾶��Rǧ�ס�
// ����N���˶��������꣨��λ��ǧ�ף���������ж��ٸ��˶�����ᱻ�״���⵽�� 
// ����˵������һ����������N��R���ֱ��ʾ�˶�����ĸ��������뾶����������N�зֱ������˶���������꣨X, Y���� 
// ���˵����N���˶��������ܹ����״﷢�ֵĸ����� ����������5 30 10 25 18 12 19 10 20 25 21 22 ���������3

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

//17������������N��M (0< N < M <=100000)�������N��M����N��M��֮���ܱ�2��3���������ܱ�7���������ĸ�����
// ����˵��: ��������������N��M�� ���˵��: ��������������ĸ����� 
//��������: 5 10 
// �������: 4

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
//		printf("�����ʽ����");
//	}
//}

//18������һ�����ַ�a~z��A~Z��ɵ��ַ������ַ�������<=10000�����������������ַ����ִ����Ĳ�ֵ�ľ���ֵ 
// ���룺 ��һ�������ַ��� �ڶ������������ַ��� 
// ����� ����������ַ����ִ����Ĳ�ֵ�ľ���ֵ 
// ���������� AbddeDfacd A d 
// ��������� 2 (����:�ַ������ַ�'A'������2�Σ��ַ�'d'������4�Σ�����Ϊ|2-4|=2)
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
	printf("�����������ַ�:>\n");
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
	printf("��������ַ���Ϊ��%s\n", ch);
	printf("ҪѰ�ҵ��ַ���%c %c\n", a, b);
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

//19������һ����������<img src="http://shixun.ncccu.org.cn/upload/image/20221213/20221213162613703528.jpg"
// an=(n^2)/(n+1)(n-1),a1=1
// contenteditable="false" style="font-size: 14px; max-width: 100%;"/>
// ������ǰn��֮�ͣ������С������ʽ��������ʾ��С�����2λ������ʾ�����������룩��
