#pragma once
class Calculadora
{
private:
	int mod, op1, op2, op;
public:
	Calculadora(int,int,int,int);
	void ajuste();
	int ajuste(int);

	void info(char);
	void options();

	int sumar();
	int restar();
	int mult();
};

