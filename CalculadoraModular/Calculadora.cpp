#include "Calculadora.h"
#include <iostream>

Calculadora::Calculadora() {
	menu();
}

void Calculadora::menu() {
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

	this->mod = mod;
	this->op1 = op1;
	this->op2 = op2;
	this->op = op;

	if (this->op1 < 0 || this->op2 < 0) {
		ajuste();
	}

	options();
}

void Calculadora::options() {
	switch (op)
	{
	case 1:
		info('+');
		std::cout << sumar() << " mod " << mod << " = " << sumar();
		break;
	case 2:
		info('-');
		std::cout << restar() << " mod " << mod << " = " << restar();
		break;
	case 3:
		info('*');
		std::cout << mult() << " mod " << mod << " = " << mult();
		break;
	case 4:
		std::cout << "Si el numero es igual a 0 significa que no posee un inverso multiplicativo" << std::endl;
		std::cout << op1 << "^-1" << " mod " << mod << " = " << inverso(mod, op1) << std::endl;
	default:
		break;
	}
}

void Calculadora::info(char sign) {
	std::cout << op1 << " mod " << mod << " " << sign << " " << op2 << " mod " << mod << std::endl;
}

void Calculadora::ajuste() {
	while (op1 < 0) {
		this->op1 += mod;
	}
	while (op2 < 0) {
		this->op2 += mod;
	}
}

int Calculadora::ajuste(int num) {
	while (num < 0) {
		num += mod;
	}
	return num;
}

int Calculadora::sumar() {
	return ((op1 + op2) % mod);
}

int Calculadora::restar() {
	return ajuste((op1 - op2) % mod);
}

int Calculadora::mult() {
	return ((op1 * op2) % mod);
}

int Calculadora::inverso(int n1, int n2, int u0, int u1) {
	int q = n1 / n2;
	int r = n1 % n2;
	int u2 = (u0 - (q * u1));

	if (r == 1) {
		return (this->mod + u2) % this->mod;
	}
	if (r == 0) {
		//no tiene residuo
		return 0;
	}
	return inverso(n2, r, u1, u2);
}

/*
int Calculadora::inverso(int n1, int n2, int u0 = 0, int u1 = 1)
{
	int q = n1 / n2;x|
	int r = n1 % n2;
	int u2 = (u0 - (q * u1));
	while (r != 1 && r != 0)
	{
		n1 = n2;
		n2 = r;
		r = n1 % n2;
		q = n1 / n2;
		u0 = u1;
		u1 = u2;
		u2 = (u0 - (q * u1));
	}

	if (r == 1)
	{
		return (this->mod + u2) % this->mod;
	}

	return 0;
}

*/