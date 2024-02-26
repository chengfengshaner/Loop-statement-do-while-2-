#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>

//int main()
//{
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;//计算n的阶乘
//}

int main()
{
	int i = 0;
	int	n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		//ret = 1;  //在此处清空ret以解决
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
		
	}
		printf("%d", sum);//ret每次循环需归0，此处为1!+ 1!+2! ...+10!

	return 0;//计算1!+2!...+10!
}