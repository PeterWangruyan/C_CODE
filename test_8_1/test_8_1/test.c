#define _CRT_SECURE_NO_WARNINGS 1
//统计二进制中1的个数（题目内容：写一个函数返回参数二进制中1的个数（比如 15->二进制序列:0000 1111 4个1））
/*#include <stdio.h>
#include <stdlib.h>
int count_bit_one(unsigned int n)//unsigned-无符号，当输入负数时把最高位当作有效位来处理
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n = n / 2 ;
	}
	return count;
}
/*int count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((((n >> i) & 1) == 1))
		{
			count++;
		}
	}
	return count;
}

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n &(n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	//写一个函数求a的二进制（补码）表示中有几个1
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	//system("pause");//system-库函数-执行系统命令—pause(暂停)
	return 0;
}*/
//求二进制中不同位的个数（题目内容：两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同？输入例子：1999 2299）
/*#include <stdio.h>
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n &(n - 1);
		count++;
	}
	return count;
}
int count_diff_bit(int m, int n)
{
	int temp = m^n;//^异或
	int count = 0;
     return count_bit_one(temp);
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = count_diff_bit(m, n);
	printf("count = %d", count);
	return 0;
}
*/
//打印一个数的二进制的奇数位和偶数位
/*#include <stdio.h>
int Print(int m)
{
	int i = 0;
	printf("奇数位: \n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
	printf("\n");
	printf("偶数位: \n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
	
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}*/
//打印数组的内容
/*#include <stdio.h>
void Print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", (*(p + i)));
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	return 0;
}*/
//输出指定内容的九九乘法表
/*#include <stdio.h>
void Print_table(int m)
{
	int i = 0;
	for (i = 1; i <= m; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	Print_table(m);
	return 0;
}*/
//字符串逆置
#include <stdio.h>
# include <string.h>
//int my_strlen(char*  str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
void Reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	/*int right = my_strlen(arr)-1;*/
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;

	}
}
//void Reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		Reverse_string(arr + 1);
//	arr[len - 1] = temp;
//}
int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}

//写一个函数递归调用求两位数字之和
/*#include <stdio.h>
int Digital_sum(unsigned int num)
{
	if (num > 9)
	{
		return Digital_sum(num / 10) + num % 10;
	}
	else
		return num;
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = Digital_sum(num);
	printf("%d", ret);
	return 0;
}*/
//递归实现n的k次方
/*#include <stdio.h>
double Pow(int n, int  k)
{
	//n^k=n*(n-1)
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else if (k>0)
		return n*Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n,k);
	printf("%lf\n", ret);
	return 0;
}
*/