#define _CRT_SECURE_NO_WARNINGS 1
//ͳ�ƶ�������1�ĸ�������Ŀ���ݣ�дһ���������ز�����������1�ĸ��������� 15->����������:0000 1111 4��1����
/*#include <stdio.h>
#include <stdlib.h>
int count_bit_one(unsigned int n)//unsigned-�޷��ţ������븺��ʱ�����λ������Чλ������
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
	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	//system("pause");//system-�⺯��-ִ��ϵͳ���pause(��ͣ)
	return 0;
}*/
//��������в�ͬλ�ĸ�������Ŀ���ݣ�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ���������ӣ�1999 2299��
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
	int temp = m^n;//^���
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
//��ӡһ�����Ķ����Ƶ�����λ��ż��λ
/*#include <stdio.h>
int Print(int m)
{
	int i = 0;
	printf("����λ: \n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (m >> i) & 1);
	}
	printf("\n");
	printf("ż��λ: \n");
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
//��ӡ���������
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
//���ָ�����ݵľžų˷���
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
//�ַ�������
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

//дһ�������ݹ��������λ����֮��
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
//�ݹ�ʵ��n��k�η�
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