#include "Span.hpp"

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::out_of_range("Span is already full!");
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	unsigned int minSpan = 4294967295;
	for (size_t i = 1; i < _numbers.size(); ++i)
	{
		unsigned int span = std::abs(_numbers[i] - _numbers[i - 1]);
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

unsigned int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	unsigned int maxSpan = 0;
	for (size_t i = 1; i < _numbers.size(); ++i)
	{
		unsigned int span = std::abs(_numbers[i] - _numbers[i - 1]);
		if (span > maxSpan)
			maxSpan = span;
	}
	return maxSpan;
}

Span::Span(unsigned int n) : _maxSize(n)
{
	_numbers.reserve(n);
}

Span::Span() : _maxSize(0) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	_maxSize = other._maxSize;
	_numbers = other._numbers;
	return *this;
}

Span::~Span() {}
