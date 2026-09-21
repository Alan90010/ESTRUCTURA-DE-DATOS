#include <iostream>
#include <limits>
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
    bool entradaValida = false;
 
    // Bucle que se repite hasta recibir un valor correcto
    while (!entradaValida) {
        cout << "Ingresa un numero entero (>= 0): ";
        cin >> numero;
 
        if (cin.fail()) {
            // El usuario ingreso algo que no es un numero entero
            cout << "Entrada no valida. Debes ingresar un numero entero." << endl << endl;
            cin.clear(); // Limpia el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta el resto del buffer
        } else if (numero < 0) {
            // El usuario ingreso un numero negativo
            cout << "No se puede calcular el factorial de un numero negativo. "
                 << "Intenta de nuevo." << endl << endl;
        } else {
            entradaValida = true;
        }
    }
 
    cout << "\nResultado del proceso:" << endl;
 
    long long resultado = factorial(numero);
 
    cout << "\nEl factorial de " << numero
         << " es: " << resultado << endl;
 
    return 0;
}