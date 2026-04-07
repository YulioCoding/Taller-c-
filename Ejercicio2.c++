#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;

    if (num2 != 0) {
        double division = num1 / num2;
        cout << "División: " << division << endl;
    } else {
        cout << "División: No se puede dividir entre cero." << endl;
    }

    if (num1 > num2) {
        cout << "El primer número es mayor." << endl;
    } 
    else if (num2 > num1) {
        cout << "El segundo número es mayor." << endl;
    } 
    else {
        cout << "Ambos números son iguales." << endl;
    }

    return 0;
}
