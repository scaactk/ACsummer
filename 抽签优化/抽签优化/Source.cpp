#include<cstdio>
#include<cstdlib>
int k[1000000 + 3];
int n, m;

//二分查找
bool binary_search(int x)
{
	int l = 0, r = n;//这里上线取n或者n-1根据编码习惯来

	while (r - l >= 1)
	{
		int  i = (l + r) / 2;
		if (x == k[i]) return true;
		else if (x > k[i])
		{
			l = i + 1;
		}
		else r = i;
	}
	return false;
}

int cmp(const void *a, const void* b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	//读入数据
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}

	//快速排序
	qsort(k, n, sizeof(int),cmp);

	//检测匹配信息
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < n; z++)
			{
				if (binary_search(m - k[i] - k[j] - k[z]))
				{
					f = true;
				}
			}
		}
	}
	if (f) {
		puts("YES");
	}
	else {
		puts("NO");
	}
	
	system("pause");
	return 0;
}