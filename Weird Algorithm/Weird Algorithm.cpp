// Weird Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

int Weirdalgorithm(int num) {
	std::cout << num << " ";
	while (num != 1) {
		if (num % 2 == 0) {
			num = num / 2;
			std::cout << num << " ";
		}
		else {
			num = num * 3 + 1;
			std::cout << num << " ";
		}

	}
	return num;
}







int main()
{
	int input;
	std::cin >> input;
	Weirdalgorithm(input);








}

