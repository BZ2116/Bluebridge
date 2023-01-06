#include <iostream>
#include <algorithm>//sort 在这个头文件中

using namespace std;

int main()
{
	int n, a[200];
	cin >> n;
	//输入数组中的数据
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	//排序
	//还可以用冒泡排序
/*	for (int l = 0; l < n - 1; l++)
	{
		for (int j = 0; j < n - 1 - l; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}*/
	//sort 直接搞
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a, a + n, greater<int>());
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
