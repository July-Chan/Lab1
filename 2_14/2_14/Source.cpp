#include<iostream>
#include<Windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int i, j;
	int tmp, k, exch;
	const int MaxN = 100;

	cout << "Введіть кількість членів масиву\t";
	cin >> n;
	float arr[MaxN];

	for (i = 0; i < n; i++)
	{
		cout << "Введіть " << i + 1 << "-ий елемент масиву\t";
		cin >> arr[i];


	}
	cout << endl;
	cout << "Початковий масив";
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	for (i = 0; i < n; i++)
	{
		k = i;
		exch = 0;
		tmp = arr[i];
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < tmp)
			{
				k = j;
				tmp = arr[j];
				exch = 1;
			}
		}
		if (exch)
		{
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	
	}
		cout << endl;
		cout << "Відсортований масив у порядку збільшення";
		cout << endl;
		for (i = 0; i < n; i++) {
			cout << arr[i] << "  ";
		}

		for (i = 0; i < n; i++)
		{
			k = i;
			exch = 0;
			tmp = arr[i];
			for (j = i + 1; j < n; j++)
			{
				if (arr[j] > tmp)
				{
					k = j;
					tmp = arr[j];
					exch = 1;
				}
			}
			if (exch)
			{
				arr[k] = arr[i];
				arr[i] = tmp;
			}

		}
		cout << endl;
		cout << "Відсортований масив у порядку зменшення";
		cout << endl;
		for (i = 0; i < n; i++) {
			cout << arr[i] << "  ";
		}


		cout << endl;
		return 0;

	}
