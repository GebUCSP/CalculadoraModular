#include <iostream>
#include "Calculadora.h"

int main()
{
    Calculadora* p = new Calculadora();
    delete p;
    p = nullptr;
}

