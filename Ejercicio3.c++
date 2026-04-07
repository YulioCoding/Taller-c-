#include <iostream>
#include <string>
#include <iomanip>

int main() {
    double nota;

    std::cout << "Ingrese su nota: ";
    std::cin >> nota;

    if (nota >= 0 && nota <= 5.0) {
        if (nota <= 2.9) {
            std::cout << "Reprueba" << std::endl;
        } 
        else if (nota <= 4.5) {
            std::cout << "Aprueba" << std::endl;
        } 
        else {
            std::cout << "Excelente" << std::endl;
        }
    } 
    else {
        std::cout << "Nota incorrecta, tiene que ser entre 0.0 - 5.0" << std::endl;
    }

    return 0;
}
