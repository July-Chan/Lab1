#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int MaxN = 100;
	int n;
	cout << "Введіть кількість елементів масиву\t";
	cin >> n;
	int i, j;
	int sort;
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
		for (j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[i])
			{
				sort = arr[i];
				arr[i] = arr[j];
				arr[j] = sort;
				
			}

		}
	}
	cout << endl;
	cout << "Масив в порядку збільшення";
	cout << endl;

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";

	}



	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (arr[j] > arr[i])
			{
				sort = arr[i];
				arr[i] = arr[j];
				arr[j] = sort;
				
			}
		}
	}
	cout << endl;
	cout << "Масив в порядку зменшення";
	cout << endl;

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}

	return 0;

}
