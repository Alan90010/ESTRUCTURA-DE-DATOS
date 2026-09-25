#include <iostream>
#include <vector>
using namespace std;

// Imprime todos los elementos del arreglo separados por espacio
void imprimirArreglo(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Ordenamiento por selección (ascendente)
void ordenamientoPorSeleccion(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;

        // Buscar el elemento minimo en la parte no ordenada
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }

        // Intercambiar el minimo encontrado con el primer elemento no ordenado
        if (indiceMinimo != i) {
            swap(arr[i], arr[indiceMinimo]);
        }

        // Mostrar el estado del arreglo despues de esta pasada
        cout << "Pasada " << (i + 1) << ": " << endl;
        imprimirArreglo(arr);
        cout << endl;
    }
}

int main() {
    vector<int> arr = {3, 12, 32, 8, 45, 20, 64};

    cout << "Arreglo original: " << endl;
    imprimirArreglo(arr);
    cout << endl;

    ordenamientoPorSeleccion(arr);

    cout << "Arreglo ordenado: " << endl;
    imprimirArreglo(arr);

    return 0;
}