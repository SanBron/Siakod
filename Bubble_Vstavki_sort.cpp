// Bubble_Vstavki_sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int A[n];
    int B[n];
    int k = 0;
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        B[i] = A[i];
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);

    for (int i = 1; i < n; i++)
        for (int j = i; j > 0 && B[j - 1] > B[j]; j--)
            swap(B[j - 1], B[j]);
    cout << "Пузырёк" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl <<"Вставки" << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
}