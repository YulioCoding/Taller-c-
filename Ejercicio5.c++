#include <iostream>
using namespace std;

double areaCirculo(double radio);
long long factorial(int numero);
bool esPar(int numero);

int main() {
    int opcion;

    do {
        cout << "\n===== MENÚ =====" << endl;
        cout << "1. Calcular area de un circulo" << endl;
        cout << "2. Calcular factorial" << endl;
        cout << "3. Verificar si un número es par o impar" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double radio;

                cout << "Ingrese el radio: ";
                cin >> radio;
                cout << "Area del circulo: "
                     << areaCirculo(radio) << endl;
                break;
            }

            case 2: {
                int numero;

                cout << "Ingrese un número: ";
                cin >> numero;

                if (numero < 0) {
                    cout << "El factorial no esta definido para negativos." << endl;
                } else {
                    cout << "Factorial de " << numero << " es: "
                         << factorial(numero) << endl;
                }
                break;
            }

            case 3: {
                int numero;

                cout << "Ingrese un número: ";
                cin >> numero;

                if (esPar(numero)) {
                    cout << "El número es PAR." << endl;
                } else {
                    cout << "El número es IMPAR." << endl;
                }
                break;
            }

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "opción invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}

double areaCirculo(double radio) {
    const double PI = 3.1416;
    return PI * radio * radio;
}

long long factorial(int numero) {
    long long factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}

bool esPar(int numero) {
    return (numero % 2 == 0);
}
