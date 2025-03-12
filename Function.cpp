#include <iostream>
using namespace std;

void IsMultipleOfFive(int num);
void AddAllEvens(int num);
int SimpleCalculator(double num1, double num2, char op);

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	IsMultipleOfFive(num);
	AddAllEvens(num);
	double num1, num2;
	char op;
	cout << "Enter two numbers and an operator(+ or - or * or /): ";
	cin >> num1 >> num2 >> op;
	cout << SimpleCalculator(num1, num2, op);
}


void IsMultipleOfFive(int num) {
	if (num % 5 == 0) {
		cout << "The number " << num << " is a multiple of five." << endl;
	}
	else {
		cout << "The number " << num << " is not a multiple of five." << endl;
	}
}
void AddAllEvens(int num) {
	int sum = 0;
	for (int i = num; i > 0; i--) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << "The sum of all the even numbers below "<< num << " is " << sum << endl;
}
int SimpleCalculator(double num1, double num2, char op) {
	if (op == '+') {
		return num1 + num2;
	}
	else if (op == '-') {
		return num1 - num2;
	}
	else if (op == '*') {
		return num1 * num2;
	}
	else if (op == '/') {
		if (num2 == 0) {
			cout << "You cannot divide by 0." << endl;
		}
		else {
			return num1/num2;
		}
	}
	else {
		cout << "You entered an invalid operator." << endl;
	}
}
