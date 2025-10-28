#include<iostream>

int plusOne();

int main() {
	std::cout << "Result: " << plusOne() << '\n';
	std::cout << "Result: " << plusOne() << '\n';
	std::cout << "Result: " << plusOne() << '\n';
	return 0;
}

int plusOne() {
	static int counter = {3}; // static variable to retain its value between calls
	return ++counter;
}