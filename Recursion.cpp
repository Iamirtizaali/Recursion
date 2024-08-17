#include <iostream>
#include <string>
using namespace std;



int factorial(int n);
int power(int n, int p);
int print1(int n);
int print2(int n);
int fibonacciSeries(int n);
void sayNumber(int n);
bool isSorted(int arr[], int size);
bool linearSearch(int arr[], int size, int key);
bool binarySearch(int arr[], int s, int e,int key);
bool checkPalindrome(string str, int s, int e);
int GCD(int larger, int smaller);
void reverseString(string str, int size);
void printSubsets(int arr[], int size, string part);
int powerFunction(int num, int p);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
int main() {
	int arr[10] = {1,4,7,9,12,15,17,19,23,23 };
	int arr2[3] = { 1,2,3 };
	int unSort[10] = { 10,9,8,7,6,5,4,3,2,1 };
	//int n, p;
	/*cout << "Enter a number: ";
	cin >> n;*/
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
	//sayNumber(n);
	//cout << (isSorted(arr, 6) ? "Array is sorted" : "Array is not sorted") << endl;
	//cout << (linearSearch(arr, 6, 8) ? "Element found" : "Element is not found") << endl;
	//cout << (binarySearch(arr,0,9, 23) ? "Element found" : "Element is not found") << endl;
	//cout << (checkPalindrome("aabbccdbaa",0,9) ? "String is palindrome" : "string is not palindrome") << endl;
	//cout<<GCD(1024, 26)<<endl;
	//string str = "hello i am irtiza ali";
	//reverseString(str,str.size());
	//printSubsets(arr2, 3, "");
	//cout << powerFunction(5, 9);
	printArray(unSort, 10);
	//bubbleSort(unSort, 10);
	selectionSort(unSort, 10);
	printArray(unSort, 10);

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

bool isSorted(int arr[], int size) {
	if (size <= 1) {
		return true;
	}
	if (arr[0] <= arr[1]) {
		bool ans=isSorted(arr+1, size - 1);
		return ans;
	}
	else {
		return false;
	}

}

bool linearSearch(int arr[], int size,int key) {
	if (size == 0) {
		return false;
	}
	if (arr[0] == key) {
		return true;
	}
	else
	{
		return linearSearch(arr + 1, size - 1, key);
	}
}


bool binarySearch(int arr[], int s,int e,int key) {
	if (s > e) {
		return false;
	}
	int mid = s + ((e - s) / 2);
	if (arr[mid]==key)
	{
		return true;
	}
	else if (arr[mid]>key)
	{
		return binarySearch(arr, s, mid - 1, key);
	}
	else
	{
		return	binarySearch(arr, mid + 1, e, key);
	}
}

bool checkPalindrome(string str, int s, int e) {
	if (s>=e)
	{
		return true;
	}
	if (str[s]==str[e])
	{
		return checkPalindrome(str, s+1, e-1);
	}
	else
	{
		return false;
	}
}


int GCD(int larger, int smaller) {
	if (larger%smaller==0)
	{
		return smaller;
	}
	int num = larger % smaller;
	return GCD(smaller, num);
}


void reverseString(string str, int size) {
	if (size<0)
	{
		return;
	}
	cout << str[size];
	reverseString(str, size - 1);
}

void printSubsets(int arr[], int size, string part) {
	if (size<=0)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		part += arr[i];
		cout << part << endl;
	}
	printSubsets(arr + 1, size - 1, "");
}

int powerFunction(int num, int p) {
	if (p==0)
	{
		return 1;
	}
		int pow = p / 2;
		int ans=powerFunction(num, pow);
	if (p%2==0)
	{
		return  ans* ans;
	}
	else
	{
		
		return num * ans * ans;
	}
}

void printArray(int arr[], int size) {
	if (size==0)
	{
		cout << endl;
		return;
	}
	cout << arr[0] << " ";
	printArray(arr + 1, size - 1);
}

void bubbleSort(int arr[], int size) {
	if (size==1 || size==0)
	{
		return;
	}
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
		}
	}
	bubbleSort(arr, size - 1);   
}

void selectionSort(int arr[], int size) {
	if (size==1)
	{
		return;
	}
	int min = arr[0];
	int minIdx = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			minIdx = i;
		}
	}
	swap(arr[0], arr[minIdx]);
	selectionSort(arr + 1, size - 1);
}