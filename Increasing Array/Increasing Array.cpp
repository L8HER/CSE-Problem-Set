// Increasing Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>


int IncArray(std::vector<int>arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (i - 1 != -1) {
			while (arr[i] < arr[i - 1]) {
				arr[i] += 1;
				count++;
			}
		}

	}
	return count;
}

int main()
{
	std::vector<int>input;
	int arrsize,arraynum;

	std::cin >> arrsize;
	for (int i = 0; i < arrsize; i++) {
		std::cin >> arraynum;
		input.push_back(arraynum);
	}

	std::cout << IncArray(input);





}


