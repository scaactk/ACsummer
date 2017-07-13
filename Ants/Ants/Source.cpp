#include<cstdio>
#include<cstdlib>
const int MAX_N = 1000;
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
	int l, n;
	int arr[MAX_N];
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
	printf("%d\n%d", minT, maxT);
	return 0;
}