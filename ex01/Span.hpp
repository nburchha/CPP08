#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
	public:
		Span(unsigned int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int n);
		template <typename InputIterator>
		void addNumbers(InputIterator begin, InputIterator end) {
			size_t distance = std::distance(begin, end);

			if (_numbers.size() + distance > _maxSize)
				throw std::out_of_range("Cannot add more numbers, span will exceed its maximum size");
			_numbers.insert(_numbers.end(), begin, end);
		}
		~Span();
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
		Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
};