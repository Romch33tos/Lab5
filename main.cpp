#include <iostream>
#include <math.h>

using namespace std;

void elementsInput(int arr[], int size) {
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int sumOfSquares(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(arr[i], 2);
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int m, n;

    cout << "Введите размер массива P: ";
    cin >> m;
    int P[m];

    elementsInput(P, m);

    cout << "\nВведите размер массива G: ";
    cin >> n;
    int G[n];

    elementsInput(G, n);

    cout << "\nСумма квадратов элементов массива P: " << sumOfSquares(P, m) << endl;
    cout << "\nСумма квадратов элементов массива G: " << sumOfSquares(G, n) << endl;

    return 0;
}
