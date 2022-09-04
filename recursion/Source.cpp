#include<iostream>
using namespace std;

int factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;

}

int main() {
	setlocale(LC_ALL, "russian");
	long long n;

		


		cout << "введите число" << "\n";
		cin >> n;
		cout << n << "!= " << factorial(n) << "\n";



		return 0;
}