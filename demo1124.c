//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int  Binary_search(int arr1[],int x,int y)
{
	int b = 0;
	printf("��������Ҫ���ҵ���:->");
	scanf("%d", &b);
	while (x <= y)
	{
		int mid = (x + y) / 2;
		if (arr1[mid] > b)
		{
			y = mid - 1;
		}
		else if (arr1[mid] < b)
		{
			x = mid+1;
		}
		else
		{
			return mid;
		}

	}
	if (x>y)
	{
		return -1;
	}
}
int main()
{
	int a = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;//������±�
	int right = sizeof(arr)/sizeof(arr[0])-1;//���ұ��±�
	a=Binary_search(arr,left,right);
	if (a!=-1)
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", a);
	}
	if (a == -1)
	{
		printf("û�ҵ�\n");
	}
    system("pause");
    return 0;
}