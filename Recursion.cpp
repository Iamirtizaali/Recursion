#include <iostream>
#include <string>
using namespace std;



int factorial(int n);
int power(int n, int p);
int print1(int n);
int print2(int n);
int fibonacciSeries(int n);
void sayNumber(int n);

int main() {

	int n, p;
	cout << "Enter a number: ";
	cin >> n;
	//cout << "Enter the power: ";
	//cin >> p;
	//cout << "Factorial of " << n << " is " << factorial(n) << endl;
	//cout << n << " raised to the power " << p << " is " << power(n, p) << endl;
	//cout << "Printing from 1 to " << n << endl;
	//print1(n);
	//cout << "Printing from " << n << " to 1" << endl;
	//print2(n);
	//cout << "Fibonacci series of 5 numbers is: ";
	//// for loop to print the fibonacci series.
	//for (int i = 0; i < n; i++) {
	//	cout << fibonacciSeries(i) << " ";
	//}
	sayNumber(n);
	return 0;
}

int factorial(int n) {
	if (n == 0) {
		return 1;
	} 
	else if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int power(int n, int p) {
	if (p == 0) {
		return 1;
	}
	return n * power(n, p - 1);
}

int print1(int n) {
	if (n == 0) {
		return 0;
	}
	cout << n << endl;
	return print1(n - 1);
}

int print2(int n) {
	if (n == 0) {
		return 0;
	}
	print2(n - 1);
	cout << n << endl;
	return 0;
}
 
int fibonacciSeries(int n) {
	if (n == 0)
		return 0;
	// Stop condition
	if (n == 1 || n == 2)
		return 1;
	// Recursion function
	else
		return (fibonacciSeries(n - 1) + fibonacciSeries(n - 2));
}


void sayNumber(int n) {
	string num[10] = {
		"zero","one","two","three","four","five","six","seven","eight","nine",
	};
	if (n == 0) {
		return;
	}
	int digit = n % 10;
	n = n / 10;
	sayNumber(n);
	cout << num[digit] << " ";
}