
//16��д��һ������ͳ�ƴ�1��N��N�����У�����������������������������������x����
// 1.x��һ����������2, 3, 5, 7....)
// 2.x��һ���ԳƵ���(��1, 11, 121, ���ǶԳƵ���)
// 3.x���������ֺ�ǡ����7�ı���(��7, 16, 25, 34, 43, 61, 70, 115, )
// ���룺һ������N(1 <= N <= 10000)
// ���:������������������֮�����ĸ���
// ��������:20
// �������9
// �������ͣ�����1����1~10������Ϊ2, 3, 5, 7, ����2 : �ԳƵ���Ϊ1,

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
//// �ж��Ƿ�Ϊ����
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
//// �ж��Ƿ�Ϊ�Գ���
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
//// �ж����ֺ��Ƿ���7�ı���
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
//// ͳ�Ʒ������������ָ���
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
//    printf("������һ������N (1 <= N <= 10000): ");
//    scanf_s("%d", &N);
//
//    if (N >= 1 && N <= 10000) {
//        int result = count_valid_numbers(N);
//        printf("%d\n", result);
//    }
//    else {
//        printf("���벻�ڷ�Χ�ڡ�\n");
//    }
//
//    return 0;
//}


//18������N���˵���(chinese)��(math)��(english)���Գɼ���������ܷ���͵�ѧ���͵�����͵�ѧ������ͬ�ĳɼ�ҲҪ���(����ԭ����˳�� 
// ���룺 һ������n��ʾn���˵Ŀ��Գɼ���1 < n <= 1000), �����n�У�ÿ�����������ѧ�������������ĳɼ�����ѧ�ɼ�������ɼ������������� 
// ����� �������������͵��ˣ����Բ��У���Ȼ������ѧ��͵�, ������͵ģ��������ܷ���͵��ˣ����Բ��У������ʽ�ο��������
// �������� 5 tom 100 99 98 alice 100 100 1
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
	printf("������ѧ��������\n");
	scanf_s("%d", &N);
	//getchar();
	int i;
	for (i = 0; i < N; i++)
	{
		printf("������%d��ѧ�������������ĳɼ�����ѧ�ɼ���Ӣ��ɼ�\n", i + 1);
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
//	printf("������ѧ��������\n");
//	scanf_s("%d", &N);
//	//getchar();
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("������%d��ѧ�������������ĳɼ�����ѧ�ɼ���Ӣ��ɼ�\n", i + 1);
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


//19������һ��n*m�ĵ�ͼ����ͼ��ÿ��������һ����������ʾ�ø��ӵ�����ֵ��
// С����ʼʱվ�ڵ�ͼ���Ͻǣ�(1��1)��λ�ã���ͬʱ�泯�ҷ�����ÿ��ȥ��һ�����ڣ��������ң���û�б������ĸ��ӣ�
// ������ǰ���ĸ��ӷ������Լ��泯�ķ�������Ҫת�򣬷�����Ҫ����һ��ת�򿨣���С���ʼӵ��k��ת�򿨡�
// С�����������и����е����ְ���˳��ƴ�������������õ����ܵ�����ֵ������

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
