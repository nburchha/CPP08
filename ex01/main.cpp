#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

void testSpanWithFiveNumbers()
{
	std::cout << "Test with 5 numbers:" << std::endl;
	Span sp(5);

	std::vector<int> numbers;
	numbers.push_back(6);
	numbers.push_back(3);
	numbers.push_back(17);
	numbers.push_back(9);
	numbers.push_back(11);
	sp.addNumbers(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void testSpanException()
{
	std::cout << "\nTest exception:" << std::endl;
	Span sp(3);

	std::vector<int> numbers;
	numbers.push_back(6);
	numbers.push_back(3);
	numbers.push_back(17);
	numbers.push_back(9);
	sp.addNumbers(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void testSpanWithHundredNumbers()
{
	std::cout << "\nTest with 100 numbers:" << std::endl;
	Span sp(100);

	std::vector<int> numbers;
	numbers.reserve(100);
	for (int i = 0; i < 100; ++i) {
		numbers.push_back(std::rand() % 1000);
	}
	sp.addNumbers(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void testSpanWithTenThousandNumbers()
{
	std::cout << "\nTest with 100,000 numbers:" << std::endl;
	Span sp(100000);

	std::vector<int> numbers;
	numbers.reserve(100000);
	for (int i = 0; i < 100000; ++i) {
		numbers.push_back(std::rand() % 1000000);
	}
	sp.addNumbers(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

int main()
{
	std::srand(std::time(0));

	try {
		testSpanWithFiveNumbers();
		testSpanWithHundredNumbers();
		testSpanWithTenThousandNumbers();
		testSpanException();
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
