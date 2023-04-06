//Functions
#include <iostream>

using namespace std;

int sum(int a, int b);								//Прототип функции (Объявление функции - Function Declaration)
int dif(int a, int b);								//Declaration - состоит только из заголовка функции и заканчивается ";"
int product(int a, int b);							//Прототип функции нужен для того чтобы имя функции ее список принимаемых параметров и тип возвращаемого значения были известны на момент вызова

double quotient(double a, double b);
int reminder(int a, int b);
int n;
int Factorial(int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = sum(a, b);								//Использование или вызов функции - Function call
													//Один раз написанная функция может быть вызвана сколько угодно раз именно благодаря этому функции и позволяют сократить объем исходного кода.  
	cout << a << "+" << b << "=" << c << endl;		
	cout << a << "-" << b << "=" << dif(a, b) << endl;
	cout << a << "*" << b << "=" << product(a, b) << endl;
	cout << a << "/" << b << "=" << quotient(a, b) << endl;
	cout << a << "%" << b << "=" << reminder(a, b) << endl;
}

int sum(int a, int b)								//Реализация функций или же (Определение функции - Function definition) Состоит из заголовка и тела функции и определяет что делает функция
{													//Для того чтобы функция разаботала ее нужно вызвать хотя бы один раз
	int c = a + b;
	return c;
}
int dif(int a, int b)
{
	//Difference - разность
	return a - b;
}
int product(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
double quotient(double a, double b)
{
	//Quotient - частное 
	return a / b;
}
int reminder(int a, int b)
{
	return a % b;
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 0; i <= n; i++)
	{
		f *= i;
	}
}