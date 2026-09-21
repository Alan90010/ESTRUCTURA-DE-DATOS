#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 100;
    
    int matriz[MAX][MAX];
    int filas, columnas;

    // Solicitar número de filas
    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    // Solicitar número de columnas
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Validar dimensiones
    if (filas <= 0 || filas > MAX || columnas <= 0 || columnas > MAX) {
        cout << "Error: las dimensiones deben estar entre 1 y " << MAX << "." << endl;
        return 1;
    }

    // Capturar los elementos de la matriz
    cout << "\nIngrese los elementos de la matriz:\n";

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz
    cout << "\n===== MATRIZ =====\n";

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << setw(6) << matriz[i][j];
        }
        cout << endl;
    }

    // Calcular suma de todos los elementos
    int sumaTotal = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            sumaTotal += matriz[i][j];
        }
    }

    // Calcular promedio
    double promedio = (double)sumaTotal / (filas * columnas);

    // Determinar mayor y menor
    int mayor = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {

            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Mostrar resultados generales
    cout << "\n===== RESULTADOS =====\n";
    cout << "Suma de todos los elementos: " << sumaTotal << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Valor mayor: " << mayor << endl;
    cout << "Valor menor: " << menor << endl;

    // Suma de cada fila
    cout << "\n===== SUMA DE CADA FILA =====\n";

    for (int i = 0; i < filas; i++) {

        int sumaFila = 0;

        for (int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j];
        }

        cout << "Fila " << i + 1 << ": " << sumaFila << endl;
    }

    // Suma de cada columna
    cout << "\n===== SUMA DE CADA COLUMNA =====\n";

    for (int j = 0; j < columnas; j++) {

        int sumaColumna = 0;

        for (int i = 0; i < filas; i++) {
            sumaColumna += matriz[i][j];
        }

        cout << "Columna " << j + 1 << ": " << sumaColumna << endl;
    }

    return 0;
}