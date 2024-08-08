#include <iostream>
#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	// Test push and top
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element after two pushes (should be 17): " << mstack.top() << std::endl;

	// Test pop
	mstack.pop();
	std::cout << "Size after one pop (should be 1): " << mstack.size() << std::endl;
	std::cout << "Top element after one pop (should be 5): " << mstack.top() << std::endl;

	// Test multiple pushes
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Size after multiple pushes (should be 5): " << mstack.size() << std::endl;

	// Test iterator functionality
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "Stack elements: ";
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	// Test copy constructor with std::stack
	std::stack<int> s(mstack);
	std::cout << "Top element of copied stack (should be 0): " << s.top() << std::endl;

	// Additional tests
	std::cout << "Testing additional operations..." << std::endl;

	// Test empty
	while (!mstack.empty()) {
		mstack.pop();
	}
	std::cout << "Size after emptying the stack (should be 0): " << mstack.size() << std::endl;

	mstack.push(42);
	mstack.push(21);
	mstack.push(84);
	std::cout << "Size after pushing three elements (should be 3): " << mstack.size() << std::endl;

	it = mstack.begin();
	ite = mstack.end();

	std::cout << "Stack elements: ";
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	return 0;
}
