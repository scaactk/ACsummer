#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int comp(const void *a, const void *b)
{
	return (*(char *)a - *(int *)b);
}
int main(int argc,char* argv[])
{
	int n;
	scanf("%d", &n);
	int arr[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), comp);
	for (int i = n - 1; i > 2; i--)
	{
		if (arr[i] < (arr[i - 1] + arr[i - 2]))
		{
			printf("%d\n", arr[i] + arr[i - 1] + arr[i - 2]);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}