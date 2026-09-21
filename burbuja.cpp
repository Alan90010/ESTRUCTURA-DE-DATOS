#include <iostream>
using namespace std;

void burbuja(int numeros[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            if (numeros[j] > numeros[j + 1]) {
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
            }
        }
    }
}

int main() {

    int numeros[8] = {45, 12, 78, 3, 25, 10, 90, 33};

    cout << "Arreglo original:" << endl;

    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    burbuja(numeros, 8);

    cout << "Arreglo ordenado:" << endl;

    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}