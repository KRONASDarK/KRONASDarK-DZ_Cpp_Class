#pragma once

#include <iostream>

class Calculator {
private:
	double num1 = 0;
	double num2 = 0;
public:
	bool set_num1(int number1) {
		bool b = false;

		if (number1 == 0) {
			b = true;
		}
		else
		{
			num1 = number1;
		}

		return b;
	};

	bool set_num2(int number2) {
		bool b = false;

		if (number2 == 0) {
			b = true;
		}
		else
		{
			num2 = number2;
		}

		return b;
	};

	double add() {

		return (num1 + num2);
	};


	double multiply() {
		return (num1 * num2);
	};

	double subtract_1_2() {
		return (num1 - num2);
	};

	double subtract_2_1() {
		return (num2 - num1);
	};

	double divide_1_2() {
		return num1 / num2;
	};

	double divide_2_1() {
		return (num2 / num1);
	};
};