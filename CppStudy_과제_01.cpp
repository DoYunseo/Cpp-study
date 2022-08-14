#include <iostream>

using namespace std;

int main() {


	cout << "My name is µµÀ±¼­ " << endl; 

	unsigned long a;
	a = 2147483648;
	cout << a << endl;

	const float PI = 2.14;
	char ch1 = 64;
	char ch2 = ch1 + 1;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	char ch;
	int X;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;
	cout << "sizeof(ch):" << sizeof ch << endl;
	cout << "sizeof(X):" << sizeof X << endl;
	cout << "sizeof(siX):" << sizeof siX << endl;
	cout << "sizeof(iX):" << sizeof iX << endl;
	cout << "sizeof(liX):" << sizeof liX << endl;
	cout << "sizeof(lliX):" << sizeof lliX << endl;

	
	cout << "Please enter Fahrenheit Value: ";
	int Fahrenheit;
	cin >> Fahrenheit;
	int Celsius;
	Celsius = (Fahrenheit - 32)* 5/9;
	cout << "Celcius value is " << Celsius << endl;


	return 0;



	}