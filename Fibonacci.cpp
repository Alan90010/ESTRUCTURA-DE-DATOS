#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) return 0;      
    if (n == 1) return 1;      
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n < 0) {
        cout << "Ingresa un numero no negativo." << endl;
        return 1;
    }

    cout << endl;
    for (int i = 0; i <= n; i++) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}