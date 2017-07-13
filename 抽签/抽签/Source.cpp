#include<cstdio>
#include<cstdlib>
const int MAX_N = 50;

int main()
{
	int n, m, k[MAX_N];
	
	//读入数据
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &k[i]);
	}

	//检测匹配信息
	bool f = false;

	//循环枚举n^4种情况
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int x = 0; x < n; x++)
			{
				for (int y = 0; y < n; y++)
				{
					int sum = k[i] + k[j] + k[x] + k[y];
					if (sum == m) {
						f = true;
					}
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