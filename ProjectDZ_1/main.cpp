#include <iostream>
#include "Class.h"

int main() {
	setlocale(LC_ALL, "Ru");

	int number1 = 0;
	int number2 = 0;

	bool run_program = true;
	while (run_program) {
		Calculator calc;

		while (calc.set_num1(number1))
		{
			std::cout << "Введите num1: ";
			std::cin >> number1;
			if (calc.set_num1(number1)) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		while (calc.set_num2(number2))
		{
			std::cout << "Введите num2: ";
			std::cin >> number2;
			if (calc.set_num2(number2)) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		std::cout << "num 1 + num2 = " << calc.add() << std::endl;
		std::cout << "num 1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num 2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num 1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num 1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num 2 / num1 = " << calc.divide_2_1() << std::endl;

		number1 = 0;
		number2 = 0;
	}

	return 0;
};