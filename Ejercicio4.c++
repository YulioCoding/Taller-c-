#include <iostream>
using namespace std;

int numero;
int suma_parcial = 1;
bool esPrimo = true;

int main() {
    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        int resultado = i * numero;
        cout << i << "*" << numero << " = " << resultado << endl;
    }

    cout << "Sumatoria desde 1 Hasta " << numero << endl;
    for (int i = 2; i <= numero; i++) {
        cout << suma_parcial << " + " << i << endl;
        suma_parcial = i + suma_parcial;
    }
    cout << "Resultado " << suma_parcial << endl;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << "Es un numero primo" << endl;
    } else {
        cout << "No es un numero primo" << endl;
    }

    return 0;
}
