#include<cstdio>
#include<algorithm>
int k[1000 + 3];
int m, n;
int kk[1000 * 1000 + 3];

bool binary_search(int x)
{
	//��ʼ��
	int l = 0, r = n*n;

	//�ڿ��ܵķ�Χ�ڲ���
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
	
	//û�ҵ��Ļ�������false
	return false;
}
int main()
{
	//��������
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	
	//�����ο��ܵĽ������ö��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			kk[i*n + j] = k[i] + k[j];
		}
	}

	//����
	std::sort(kk, kk + n*n);
	
	//���ƥ��
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