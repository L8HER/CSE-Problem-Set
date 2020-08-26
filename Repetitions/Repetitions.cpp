// Repetitions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int repetitions(std::string input) {
	int count = 1;
	int result = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == input[i + 1]) {
			count++;
		}
		if (input[i] != input[i + 1]) {
			if (count > result) {
				result = count;
			}
			count = 1;
		}
	}
	return result;
}






int main()
{
	std::string input;
	std::cin >> input;
	std::cout << repetitions(input);



	

}