#include <iostream>
#include "Class.h"

int main() {
	setlocale(LC_ALL, "Ru");

	int x;
	std::string enter;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
	std::cin >> enter;

	while (true)
	{
		if (enter == "y") {
			static bool step1 = true;
			char input;

			if (step1) {
				std::cout << "Введите начальное значение счётчика: ";
				std::cin >> x;
				step1 = false;
			}

			static Counter counter(x);

			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> input;

			if (input == 'x') {
				std::cout << "До свилания!" << std::endl;
				exit(0);
			}
			counter.command(input, counter);
		} else if (enter == "n") {
			char input;
			static Counter counter;

			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> input;

			if (input == 'x') {
				std::cout << "До свилания!" << std::endl;
				exit(0);
			}
			counter.command(input, counter);
		};
	};

	return 0;
};