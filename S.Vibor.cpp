
#include <iostream>
using namespace std;

void selectSort() {
    const int n = 10;
    int A[n] = {};
    int min;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) min = j;
            if (i != min) {
                swap(A[i], A[min]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

}