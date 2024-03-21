#include <iostream>
#include "Calculadora.h"

int main()
{

    int mod{ 0 }, op1{ 0 }, op2{ 0 }, op{ 0 };
    std::cout << "Operacion que desea realizar:\nSumar(1)\nRestar(2)\nMultiplicar(3)\nInversa(4)\nRpta: ";
    std::cin >> op;
    std::cout << "Modulo: ";
    std::cin >> mod;
    std::cout << "Primer operando: ";
    std::cin >> op1;
    if (op != 4) {
        std::cout << "Segundo operando: ";
        std::cin >> op2;
    }


    Calculadora* p = new Calculadora(mod, op1, op2, op);
}
