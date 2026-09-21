#include <iostream>
using namespace std;

long long factorial(int n) {
    cout << "Calculando factorial(" << n << ")" << endl;

    // Caso base
    if (n == 0) {
        cout << "factorial(0) = 1" << endl;
        return 1;
    }

    // Caso recursivo
    long long resultadoAnterior = factorial(n - 1);
    long long resultado = n * resultadoAnterior;

    cout << "factorial(" << n << ") = "
         << n << " * " << resultadoAnterior
         << " = " << resultado << endl;

    return resultado;
}

int main() {
    int numero;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "No se puede calcular el factorial de un numero negativo." << endl;
    } else {
        cout << "\nResultado del proceso:" << endl;

        long long resultado = factorial(numero);

        cout << "\nEl factorial de " << numero
             << " es: " << resultado << endl;
    }

    return 0;
}