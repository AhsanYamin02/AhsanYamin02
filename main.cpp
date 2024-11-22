#include <iostream>
#include <limits>

using namespace std;

// Function declarations
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    int choice;

    while (true) {
        showMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Validate input
        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid choice. Please try again.\n\n";
            continue;
        }

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

	switch (choice) {
		case 1:
		      cout <<"Result: " << add(num1,num2) << endl;
		      break;
		case 2:
		      cout <<"Result: " << subtract(num1,num2) << endl;
		      break;

		case 3:
		      cout <<"Result: " << multiply(num1,num2) << endl;
		      break;
		case 4:
		      if (num2 != 0) {
			cout <<"Result: " << divide(num1,num2) << endl;
		        } else {
			cout << "Error: Division by 0 not allowed. \n";
			}
			break;
		}
		cout << endl;
	   }
	   return 0;
	}

//Function definitions
void showMenu(){

	cout << "----CLI Calculator---\n";
	cout << "1. Add\n";
	cout << "2. Subtract\n";
	cout << "3. Multiply\n";
	cout << "4. Divide\n";
	cout << "5. Exit\n";
}

double add(double a, double b){

	return a + b;
}
double subtract(double a, double b){

	return a - b;
}
double multiply(double a, double b){

	return a * b;
}
double divide(double a, double b){

	return a / b;
}
