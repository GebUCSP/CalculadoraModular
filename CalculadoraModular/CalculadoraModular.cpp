#include <iostream>
#include "Calculadora.h"

int main()
{

    int mod, op1, op2, op;
    std::cout << "Modulo: ";
    std::cin >> mod;
    std::cout << "Primer operando: ";
    std::cin >> op1;
    std::cout << "Segundo operando: ";
    std::cin >> op2;
    std::cout << "Operacion que desea realizar:\nSumar(1)\nRestar(2)\nMultiplicar(3)\nRpta: ";
    std::cin >> op;

    Calculadora* p = new Calculadora(mod, op1, op2, op);
}
