#include<cstdio>
#include<algorithm>
int k[1000 + 3];
int m, n;
int kk[1000 * 1000 + 3];

bool binary_search(int x)
{
	//初始化
	int l = 0, r = n*n;

	//在可能的范围内查找
	while (r - l >= 1)
	{
		int i = (l + r) / 2;
		if (x == kk[i]) {
			return true;
		}
		else if (x < kk[i])
		{
			r = i;
		}
		else {
			l = i + 1;
		}
	}
	
	//没找到的话，返回false
	return false;
}
int main()
{
	//读入数据
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	
	//对两次可能的结果进行枚举
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			kk[i*n + j] = k[i] + k[j];
		}
	}

	//排序
	std::sort(kk, kk + n*n);
	
	//检测匹配
	int f = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (binary_search(m - k[i] - k[j]))
			{
				f = true;
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