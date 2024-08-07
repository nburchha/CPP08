#pragma once

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}
		MutantStack<T>& operator=(const MutantStack<T>& other) { std::stack<T>::operator=(other); return *this; }
		~MutantStack() {}
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};