#include <iostream>
#include <algorithm>//sort �����ͷ�ļ���

using namespace std;

int main()
{
	int n, a[200];
	cin >> n;
	//���������е�����
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	//����
	//��������ð������
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
	//sort ֱ�Ӹ�
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
