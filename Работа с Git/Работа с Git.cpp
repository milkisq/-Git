#include <iostream>

int summa(int a, int b)
{
	int result = a + b;
	return result;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	std::cout << "Простой калькулятор\n";
	std::cout << "Введите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "Введите второе число: ";
	int b;
	std::cin >> b;
	std::cout << "Сумма двух чисел = " << summa(a, b);
}