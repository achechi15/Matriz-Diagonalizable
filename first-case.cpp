#include <bits/stdc++.h>

using namespace std;

bool isTriangular(int arr[][]);
int *vpTriangular(int arr[][]);

int main() {
    int n;
    cout << "Introduzca el orden de la matriz: " << endl;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Introduzca el elemento [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    if(isTriangular(arr)) {
        cout << vpTriangular(arr) << endl;
    }
    return 0;
}