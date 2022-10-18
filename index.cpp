#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int num = 0;

	for (char i: str) {
		num += i - '0';
	}
	return num;
}