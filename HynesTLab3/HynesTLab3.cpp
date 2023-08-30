#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select and operation to preform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;

}

void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
		cin >> A;
	cout << "Please enter the second value: ";
		cin >> B;
	cout << "Ok" << endl;

}

void firstChoice(float A, float B, float C) {
	C = A + B;
	cout << "A + B = " << C << endl;
}

void secondChoice(float A, float B, float C) {
	C = A - B;
	cout << "A - B = " << C << endl;
}

void thirdChoice(float A, float B, float C) {
	C = A * B;
	cout << "A * B = " << C << endl;
}

void fourthChoice(float A, float B, float C) {
	C = A / B;
	cout << "A / B = " << C << endl;
}

int main() {

	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		firstChoice(A, B, 0);
	}

	if (choice == 2) {
		secondChoice(A, B, 0);
	}

	if (choice == 3) {
		thirdChoice(A, B, 0);
	}

	if (choice == 4) {
		fourthChoice(A, B, 0);
	}
	return 0;
}