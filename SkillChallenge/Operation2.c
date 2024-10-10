
//16、写个一个程序统计从1到N这N个数中，以下三个条件至少满足两个条件的数字x个数
// 1.x是一个素数（如2, 3, 5, 7....)
// 2.x是一个对称的数(如1, 11, 121, 都是对称的数)
// 3.x的所有数字和恰好是7的倍数(如7, 16, 25, 34, 43, 61, 70, 115, )
// 输入：一个整数N(1 <= N <= 10000)
// 输出:至少满足这三个条件之两个的个数
// 样例输入:20
// 样例输出9
// 样例解释：条件1：从1~10中素数为2, 3, 5, 7, 条件2 : 对称的数为1,

//*******************************************************************1
//int size(int N)
//{
//	char str[10];
//	snprintf(str, sizeof(str), "%d", N);
//	return strlen(str);
//}
//void sixteen()
//{
//	int N;
//	scanf_s("%d", &N);
//	int arr1[10000];
//	int i = 0;
//	for (i = 0; i <= N-2; i++)
//	{
//		arr1[i] = i + 2;
//	}
//	int s1 = 0, s2 = 0, s3 = 0, s4 = 0, sz = 0;
//	for (i = 0; i <= N-2; i++)
//	{
//		int j = 2;
//		for (j = 2; j <= arr1[i] / 2; j++)
//		{
//			s1 = arr1[i] % 10;
//			s2 = (arr1[i] - s1) % 100 / 10;
//			s3 = (arr1[i] - 10 * s2 - s1) % 1000 / 100;
//			s4 = (arr1[i] - 100 * s3 - 10 * s2 - s1) % 10000 / 1000;
//			sz = size(arr1[i]);
//			if (sz == 1)
//			{
//				if (arr1[i] % j == 0 && (s1) % 7 != 0)
//				{
//					arr1[i] = 0;
//				}
//			}
//			if(sz==2)
//			{ 
//				if (s1 == s2)
//				{
//					if (arr1[i] % j == 0 && (s1 + s2 ) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//				else
//				{
//					if (arr1[i] % j == 0 || (s1 + s2 ) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//			}
//			if(sz==3)
//			{ 
//				if (s1 == s3 )
//				{
//					if (arr1[i] % j == 0 && (s1 + s2 + s3 ) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//				else
//				{
//					if (arr1[i] % j == 0 || (s1 + s2 + s3 ) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//			}
//			if(sz==4)
//			{ 
//				if (s1 == s4 && s2 == s3)
//				{
//					if (arr1[i] % j == 0 && (s1 + s2 + s3 + s4) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//				else
//				{
//					if (arr1[i] % j == 0 || (s1 + s2 + s3 + s4) % 7 != 0)
//					{
//						arr1[i] = 0;
//					}
//				}
//			}
//		}
//	}
//	int count = 0;
//	for (i = 0; i < N-2; i++)
//	{
//		if (arr1[i] != 0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//*******************************************************************2
//#include <stdio.h>
//#include <stdbool.h>
//
//// 判断是否为素数
//bool is_prime(int num) {
//    if (num < 2)
//        return false;
//    int i ;
//    for (i = 2; i <= sqrt(num); i++)
//    {
//        if (num % i == 0)
//            return false;
//    }
//    return true;
//}
//
//// 判断是否为对称数
//bool is_palindrome(int num)
//{
//    int original = num, reversed = 0;
//    while (num > 0)
//    {
//        reversed = reversed * 10 + num % 10;
//        num /= 10;
//    }
//    return original == reversed;
//}
//
//// 判断数字和是否是7的倍数
//bool digit_sum_divisible_by_7(int num)
//{
//    int sum = 0;
//    while (num > 0)
//    {
//        sum += num % 10;
//        num /= 10;
//    }
//    return sum % 7 == 0;
//}
//
//// 统计符合条件的数字个数
//int count_valid_numbers(int N)
//{
//    int count = 0;
//    for (int x = 1; x <= N; x++)
//    {
//        int conditions_met = 0;
//
//        if (is_prime(x)) conditions_met++;
//        if (is_palindrome(x)) conditions_met++;
//        if (digit_sum_divisible_by_7(x)) conditions_met++;
//
//        if (conditions_met >= 2) count++;
//    }
//    return count;
//}
//
//int main() {
//    int N;
//    printf("请输入一个整数N (1 <= N <= 10000): ");
//    scanf_s("%d", &N);
//
//    if (N >= 1 && N <= 10000) {
//        int result = count_valid_numbers(N);
//        printf("%d\n", result);
//    }
//    else {
//        printf("输入不在范围内。\n");
//    }
//
//    return 0;
//}


//18、输入N个人的语(chinese)数(math)外(english)考试成绩，请输出总分最低的学生和单科最低的学生，相同的成绩也要输出(按照原来的顺序） 
// 输入： 一个整数n表示n个人的考试成绩（1 < n <= 1000), 随后有n行，每行依次是这个学生的姓名，语文成绩，数学成绩，外语成绩（都是整数） 
// 输出： 首先输出语文最低的人（可以并列），然后是数学最低的, 外语最低的，最后输出总分最低的人（可以并列）具体格式参考输出样例
// 输入样例 5 tom 100 99 98 alice 100 100 1
#include<stdio.h>
int main()
{
	struct Stu
	{
		char name[20];
		int chinese;
		int math;
		int english;
		int total;
	};
	struct Stu stu[100];
	int N;
	printf("请输入学生人数：\n");
	scanf_s("%d", &N);
	//getchar();
	int i;
	for (i = 0; i < N; i++)
	{
		printf("请输入%d名学生的姓名、语文成绩、数学成绩、英语成绩\n", i + 1);
		scanf_s("%s", stu[i].name, sizeof(stu[i].name));
		scanf_s("%d", &stu[i].chinese);
		scanf_s("%d", &stu[i].math);
		scanf_s("%d", &stu[i].english);
		stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
	}
	int minc=101,minm=101,mine=101,mint = 101;
	for (i = 0; i < N; i++)
	{
		if (stu[i].chinese <= minc)
			minc = stu[i].chinese;
		if (stu[i].math <= minm)
			minm = stu[i].math;
		if (stu[i].english <= mine)
			mine = stu[i].english;
		if (stu[i].total<=mint)
			mint = stu[i].total;
	}
	for (i = 0; i < N; i++)
		if (stu[i].chinese == minc)
			printf("%s ", stu[i].name);
	printf("\n");
	for (i = 0; i < N; i++)
		if (stu[i].math == minm)
			printf("%s ", stu[i].name);
	printf("\n");
	for (i = 0; i < N; i++)
		if (stu[i].english <= mine)
			printf("%s ", stu[i].name);
	printf("\n");
	for (i = 0; i < N; i++)
		if(stu[i].total==mint)
			printf("%s ",stu[i].name);
	printf("\n");
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		int chinese;
//		int math;
//		int english;
//		int total;
//	};
//	struct Stu stu[100];
//	int N;
//	printf("请输入学生人数：\n");
//	scanf_s("%d", &N);
//	//getchar();
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("请输入%d名学生的姓名、语文成绩、数学成绩、英语成绩\n", i + 1);
//		scanf_s("%s", stu[i].name, (unsigned)sizeof(stu[i].name));
//		scanf_s("%d", &stu[i].chinese);
//		scanf_s("%d", &stu[i].math);
//		scanf_s("%d", &stu[i].english);
//		stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
//	}
//	int minc=101,minm=101,mine=101,mint = 101;
//	for (i = 0; i < N; i++)
//	{
//		if (stu[i].chinese <= minc)
//			minc = stu[i].chinese;
//		if (stu[i].math <= minm)
//			minm = stu[i].math;
//		if (stu[i].english <= mine)
//			mine = stu[i].english;
//		if (stu[i].total<=mint)
//			mint = stu[i].total;
//	}
//	for (i = 0; i < N; i++)
//		if (stu[i].chinese == minc)
//			printf("%s ", stu[i].name);
//	printf("\n");
//	for (i = 0; i < N; i++)
//		if (stu[i].math == minm)
//			printf("%s ", stu[i].name);
//	printf("\n");
//	for (i = 0; i < N; i++)
//		if (stu[i].english <= mine)
//			printf("%s ", stu[i].name);
//	printf("\n");
//	for (i = 0; i < N; i++)
//		if(stu[i].total==mint)
//			printf("%s ",stu[i].name);
//	printf("\n");
//	return 0;
//}


//19、现有一个n*m的地图，地图上每个格子有一个正整数表示该格子的幸运值。
// 小明初始时站在地图左上角（(1，1)的位置），同时面朝右方，他每次去往一个相邻（上下左右）且没有被经过的格子，
// 若是他前往的格子方向是自己面朝的方向，则不需要转向，否则需要消耗一张转向卡，且小明最开始拥有k张转向卡。
// 小明经过的所有格子中的数字按照顺序拼接起来就是他得到的总的幸运值，比如

#include<stdio.h>
#define N 10;
#define M 20;
int main()
{
	int n , m ;
	scanf_s("%d %d", &n, &m);
	int x = 1, y = 1;
	
	return 0;
}
