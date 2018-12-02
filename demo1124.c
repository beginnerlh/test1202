//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int  Binary_search(int arr1[],int x,int y)
{
	int b = 0;
	printf("请输入你要查找的数:->");
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
	int left = 0;//最左边下标
	int right = sizeof(arr)/sizeof(arr[0])-1;//最右边下标
	a=Binary_search(arr,left,right);
	if (a!=-1)
	{
		printf("找到了，下标为%d\n", a);
	}
	if (a == -1)
	{
		printf("没找到\n");
	}
    system("pause");
    return 0;
}