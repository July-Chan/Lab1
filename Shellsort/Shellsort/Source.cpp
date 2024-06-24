#include <iostream>
#include <Windows.h>
using namespace std;

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

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            float temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    cout << "\nВідсортований масив у порядку збільшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            float temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    cout << "\nВідсортований масив у порядку зменшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
