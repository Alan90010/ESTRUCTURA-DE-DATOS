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

// Ordenamiento por selección (ascendente), con conteo de comparaciones e intercambios
void ordenamientoPorSeleccion(vector<int>& arr, long long& comparaciones, long long& intercambios) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;

        // Buscar el elemento minimo en la parte no ordenada
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }

        // Intercambiar el minimo encontrado con el primer elemento no ordenado
        if (indiceMinimo != i) {
            swap(arr[i], arr[indiceMinimo]);
            intercambios++;
        }

        // Mostrar el estado del arreglo despues de esta pasada
        cout << "Pasada " << (i + 1) << ": " << endl;
        imprimirArreglo(arr);
        cout << endl;
    }
}

int main() {
    // Puedes reemplazar este arreglo por cualquiera de las listas de prueba
    vector<int> arr = {8, 3, 7, 4, 2, 9, 1, 6, 5};

    long long comparaciones = 0;
    long long intercambios = 0;

    cout << "Arreglo original: " << endl;
    imprimirArreglo(arr);
    cout << endl;

    ordenamientoPorSeleccion(arr, comparaciones, intercambios);

    cout << "Arreglo ordenado: " << endl;
    imprimirArreglo(arr);
    cout << endl;

    cout << "Comparaciones hechas: " << comparaciones << endl;
    cout << "Intercambios hechos: " << intercambios << endl;

    return 0;
}