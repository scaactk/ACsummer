#include<iostream>
using namespace std;
int arr[50] = { 0 };
int fib(int n)
{
	if (n <= 1) return arr[n] = n;
	if (arr[n] != 0) return arr[n];
	return arr[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
	cout << fib(20) << endl;
	system("pause");
	return 0;
}