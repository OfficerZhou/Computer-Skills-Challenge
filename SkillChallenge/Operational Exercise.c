#include<stdio.h>
//现有一个数字闹钟（时间采用24时制）。
// 已知当前时间和预订的闹钟时间（全部为整点时间），请你帮忙计算，几小时后闹钟会响。 
// 输入说明：每个输入有ct和tt，ct是当前时间，tt是预定的闹铃时间。 
// 输出说明：距离闹钟响起的时间。 输入样例：22 5 输出样例：7
//int main()
//{
//	int ct,tt;
//	scanf_s("%d %d", &ct, &tt);
//	int x=0;
//	if (ct > tt)
//		x = 24 - ct + tt;
//	else
//		x = tt - ct;
//	printf("%d", x);
//	return 0;
//}

//输入一个正整数N(1 <= N < 10000), 
// 接下来输入这N个正整数序列，
// 再输入一个正整数K(1 <= K <= 100), 
// 其后跟K行操作，每行操作包括两个正整数i和j(1 <= i <= j <= N)，
// 表示将区间[i, j]中的元素删除，操作结束后输出最终的正整数序列。 
// 输入： 第一行输入N 第二行输入N个正整数 第三行输入K。 其后K行每行输入两个正整数
// 输出： 输出操作结束后的最终序列，相邻两数之间以一个空格分隔。 
// 样例输入： 10 
// 1 2 3 4 5 6 7 8 9 10 
// 2 
// 1 3 8 10 
// 样例输出： 4 5 6 7
//int main()
//{
//	int x[10000];
//	int a[2];
//	int b[2];
//	int N;
//	scanf_s("%d", &N);
//	int tem = N;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &x[i]);
//	}
//	int K;
//	scanf_s("%d", &K);
//	for (i = 0; i < K; i++)
//		scanf_s("%d %d", &a[i],&b[i]);
//	for (i = 0; i < K; i++)
//	{
//		int j = 0;
//		for (j = 0; j < N; j++)
//		{
//			if (a[i] <= x[j]&&x[j] <= b[i])
//			{
//				x[j] = NULL;
//				tem--;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (x[i] != 0)
//			printf("%d ", x[i]);
//	}
//	return 0;
//}



int main() {
    int num1;
    char str1[100];
    printf("请输入一个整数（字符串形式）：");
    fgets(str1, sizeof(str1), stdin); // 从标准输入读取字符串
    num1 = atoi(str1); // 将字符串转换为整数
    printf("转换后的整数是：%d\n", num1);

    int num2;
    char str2[100]; // 用于存储转换后的字符串
    printf("请输入一个整数：");
    scanf_s("%d", &num2); // 输入整数
    // 使用 sprintf 将整数转换为字符串
    snprintf(str2, sizeof(str2), "%d", num2);
    // 输出结果
    printf("转换后的字符串是：%s\n", str2);

    return 0;
}