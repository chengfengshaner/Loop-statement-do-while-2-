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
//	return 0;//����n�Ľ׳�
//}

int main()
{
	int i = 0;
	int	n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		//ret = 1;  //�ڴ˴����ret�Խ��
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
		
	}
		printf("%d", sum);//retÿ��ѭ�����0���˴�Ϊ1!+ 1!+2! ...+10!

	return 0;//����1!+2!...+10!
}