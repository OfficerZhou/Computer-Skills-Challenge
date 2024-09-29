#include<stdio.h>
//现有一个数字闹钟（时间采用24时制）。
// 已知当前时间和预订的闹钟时间（全部为整点时间），请你帮忙计算，几小时后闹钟会响。 
// 输入说明：每个输入有ct和tt，ct是当前时间，tt是预定的闹铃时间。 
// 输出说明：距离闹钟响起的时间。 输入样例：22 5 输出样例：7
int main()
{
	int ct,tt;
	scanf_s("%d %d", &ct, &tt);
	int x=0;
	if (ct > tt)
		x = 24 - ct + tt;
	else
		x = tt - ct;
	printf("%d", x);
	return 0;
}