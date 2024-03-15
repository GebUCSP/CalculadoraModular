#include "Calculadora.h"
#include <iostream>

Calculadora::Calculadora(int mod, int op1, int op2, int op) {
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