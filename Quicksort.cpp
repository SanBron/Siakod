// Quicksort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int QuickSort(int size, int* A) {
    int firsti = 0;
    int mid = A[size / 2];
    int lasti = size - 1;
    do {
        while (A[firsti] < mid) {
            firsti++;
        }
        while (A[lasti] > mid) {
            lasti--;
        }
        if (firsti <= lasti) {
            int tmp = A[firsti];
            A[firsti] = A[lasti];
            A[lasti] = tmp;
            firsti++;
            lasti--;
        }
    }
    while (firsti <= lasti);
        if(lasti > 0) {QuickSort(lasti+1,A);}
        if (firsti < size) {QuickSort(size-firsti,&A[firsti]);
        }
        return 0;
}



int main() {
    setlocale(LC_ALL,"Russian");
    const int n = 10;
    int m = n / 2;
        int A[n];
    int k;
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    QuickSort(n,A);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}