#include <iostream>
#include <Windows.h>
using namespace std;

int partition(float arr[], int low, int high) {
    float pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(float arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int MaxN = 100;
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    float arr[MaxN];

    for (int i = 0; i < n; i++) {
        cout << "Введіть " << i + 1 << "-ий елемент масиву: ";
        cin >> arr[i];
    }

    cout << "\nПочатковий масив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "\nВідсортований масив у порядку збільшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "\nВідсортований масив у порядку зменшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
