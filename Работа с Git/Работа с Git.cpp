#include <iostream>

// Функция для вычисления суммы двух чисел
int summa(int a, int b)
{
	int result = a + b;
	return result;
}

// Главная функция программы
int main()
{
	// Установка локали для поддержки русского языка
	setlocale(LC_CTYPE, "Russian");

	// Вывод приветственного сообщения и запрос ввода чисел
	std::cout << "Простой калькулятор\n";
	std::cout << "Введите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "Введите второе число: ";
	int b;
	std::cin >> b;
	// Вычисление суммы и вывод результата
	std::cout << "Сумма двух чисел = " << summa(a, b);
}