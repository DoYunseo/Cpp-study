#include <iostream>
using namespace std;

//1
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	//1
	cout << "int a = ";
	int a;
	cin >> a;
	cout << "int b = ";
	int b;
	cin >> b;
	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b) << endl;

	//2

	int a, b;
	cout << "enter two variables";
	cin >> a >> b;
	cout << "1.add" << endl;
	cout << "2.substract" << endl;
	cout << "3.multiply" << endl;
	cout << "4.divide" << endl;
	cout << "5.exit" << endl;
	cout << "select operation :";

	int option;
	do {
		cin >> option;
		switch (option) {
		case 1:
			cout << a + b << endl
				;
			break;
		case 2:
			cout << a - b << endl;
			break;
		case 3:
			cout << a * b << endl;
			break;
		case 4:
			cout << a / b << endl;
			break;
		case 5:
			cout << "end the program" << endl;
			break;
		default:
			cout << "wrong input" << endl;
			break;

		}
	} while (option != 5);

	//3
	int num;
	do
	{
		cout << "단 수 입력 : ";
		cin >> num;

		if (0 < num && num < 10) { 
			for (int i = 1; i < 10; i++) {
				cout << num << " * " << i << " = " << num * i << endl;
			};
		}

		else if (num == 0) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}

		else {
			cout << "다시 입력해주세요." << endl;
		}
	} while (num != 0);

	//4
	int number;
	cin >> number;
	int ten;
	int one;
	int result;
	int time = 1;
	ten = number % 10;
	one = number / 10;
	one = (ten + one) % 10;
	result = ten * 10 + one;
	if (number == result) {
		cout << time << endl;
	}
	else {
		do {
			one = (ten + one) % 10;
			ten = result % 10;
			result = ten * 10 + one;
			time++;
		} while (number != result);
		cout << time << endl;
	}

	//5
	int fib[20];
	fib[0] = 0;
	fib[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n - 1];



	return 0;
}