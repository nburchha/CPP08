
#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::out_of_range &e) {
		std::cout << "Value not found: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(vec, 15);
		std::cout << "Value found: " << *it << std::endl;
	} catch (const std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
