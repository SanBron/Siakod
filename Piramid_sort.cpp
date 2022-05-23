// Piramid_sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int A[n];
    int k = 0;
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    bool key = false;
    while (k + 2 != n) {
        key = false;
        for (int i = 0; i < n; i++) {
            if (i * 2 + 2 + k < n) {
                if ((A[i + k] > A[i * 2 + 1 + k]) || (A[i + k] > A[i * 2 + 2 + k])) {
                    if (A[i * 2 + 1 + k] < A[i * 2 + 2 + k]) {
                        swap(A[i + k], A[i * 2 + 1 + k]);
                        key = true;
                    }
                    else if (A[i * 2 + 2 + k] < A[i * 2 + 1 + k]) {
                        swap(A[i + k], A[i * 2 + 2 + k]);
                        key = true;
                    }
                }
                if (A[i * 2 + 2 + k] < A[i * 2 + 1 + k])
                {
                    swap(A[i * 2 + 1 + k], A[i * 2 + 2 + k]);
                    key = true;
                }
            }
            else if (i * 2 + 1 + k < n) {
                if (A[i + k] > A[i * 2 + 1 + k]) {
                    swap(A[i + k], A[i * 2 + 1 + k]);
                    key = true;
                }
            }
        }
        if (!key) { 
            k++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}
