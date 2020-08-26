// Missing Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<algorithm>
#include<chrono>

int missingNumber(int num, std::vector<int>arr) {
	std::sort(arr.begin(), arr.end());
	for (int i = 1; i <= num; i++) {
		if (i != arr[i-1]) {
			return i;
		}
	}


}






int main()
{

	
	int n,a;
	std::vector<int>arr;
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		std::cin >> a;
		arr.push_back(a);
	}
	auto start = std::chrono::steady_clock::now();
	std::cout << missingNumber(n, arr);
	auto end = std::chrono::steady_clock::now();

	double elapsed_time = double(std::chrono::duration_cast <std::chrono::nanoseconds>(end - start).count());
	std::cout << "\n Time spend " << elapsed_time;
}

