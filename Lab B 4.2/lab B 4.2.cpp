#include <iostream>

using namespace std; 

int main() {
	float num1, num2, num3;
	int largest;

	cout << "Enter 3 numbers.\n";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}
	
	else if (num2 > num1 && num2 > num3) {
		largest = num2;
	}

	else if (num3 > num1 && num3 > num2) {
		largest = num3;
	}

	cout << "Largest number is " << largest << ".\n";
}