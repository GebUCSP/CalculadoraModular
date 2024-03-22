#pragma once
class Calculadora
{
private:
	int mod, op1, op2, op;
public:
	Calculadora();
	void menu();
	void ajuste();
	int ajuste(int);

	void info(char);
	void options();

	int sumar();
	int restar();
	int mult();
	int inverso(int,int,int u0 = 0,int u1 = 1);
};

