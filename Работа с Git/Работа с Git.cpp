#include <iostream>

// Функция для вычисления суммы двух чисел
int summa(int a, int b, int c)
{
	int result = a + b + c;
	return result;
}

// Главная функция программы
int main()
{
	// Устанавливаем локаль для корректного отображения русских символов
	setlocale(LC_CTYPE, "Russian");

	// Выводим приветственное сообщение и запрашиваем у пользователя три числа
	std::cout << "Простой калькулятор\n";
	std::cout << "Введите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "Введите второе число: ";
	int b;
	std::cin >> b;
	std::cout << "Введите третье число: ";
	int c;
	std::cin >> c;
	// Вызываем функцию summa и выводим результат
	std::cout << "Итог = " << summa(a, b, c);
}