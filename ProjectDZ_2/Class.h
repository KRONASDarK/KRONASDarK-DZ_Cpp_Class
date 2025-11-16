#pragma once

#include <iostream>

class Counter {
private:
	int score;
public:
	Counter() : score(1) {};

	Counter(int value) : score(value) {};

	void increment() { score++; };

	void decrement() { if (score > 0) score--; };

	void print_info() const { 
		std::cout << "Текущий счёт: " << score << std::endl; 
	};

	void command(char input, Counter &cou) {
		switch (input)
		{
		case '+':
			cou.increment(); break;
		case '-':
			cou.decrement(); break;
		case '=':
			cou.print_info(); break;
		default:
			std::cout << "Неверная команда!" << std::endl;
			break;
		};
	};
};