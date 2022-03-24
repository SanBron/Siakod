
#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int A[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int d = n / 2;
    int k, j;
    while (d != 0) {
        for (int i = 0; i < n - d; i++) {
            j = i;
            for (j = i; j >= 0; j--) {
                if (A[j] > A[j + d]) {
                    k = A[j];
                    A[j] = A[j + d];
                    A[j + d] = k;
                    j--;
                }
            }
        }
        d = d / 2;
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}