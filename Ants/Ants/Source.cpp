#include<cstdio>
#include<cstdlib>
int arr[1000003];
int max(int a, int b)
{
	return (a>b ? a : b);
}
int min(int a, int b)
{
	return (a<b ? a : b);
}
int main()
{
	int count;
	scanf("%d", &count);
	for (int t = 0; t<count; t++)
	{
		int l, n;
		scanf("%d %d", &l, &n);
		for (int i = 0; i<n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int minT = 0;
		int maxT = 0;
		for (int i = 0; i<n; i++)
		{
			minT = max(minT, min(arr[i], l - arr[i]));
			maxT = max(maxT, max(arr[i], l - arr[i]));
		}
		printf("%d %d\n", minT, maxT);
	}
	return 0;
}