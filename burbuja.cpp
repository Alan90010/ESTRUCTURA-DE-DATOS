#include <iostream>
using namespace std;

void mostrarArreglo(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

void burbuja(int numeros[], int n) {

    int comparaciones = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - 1 - i; j++) {

            comparaciones++;

            if (numeros[j] > numeros[j + 1]) {

                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;

                intercambios++;
            }
        }

        cout << "Pasada " << i + 1 << ": ";
        mostrarArreglo(numeros, n);
    }

    cout << endl;
    cout << "Elementos: " << n << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
}

int main() {

    int numeros[8] = {45, 12, 78, 3, 25, 10, 90, 33};

    cout << "Arreglo original: ";
    mostrarArreglo(numeros, 8);

    cout << endl;

    burbuja(numeros, 8);

    cout << endl;
    cout << "Arreglo ordenado: ";
    mostrarArreglo(numeros, 8);

    return 0;
}