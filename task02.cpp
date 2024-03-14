#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    do {
        
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero\n";
                    continue; 
                }
                break;
            default:
                cout << "Invalid operation\n";
                continue; 
        }

        
        cout << "Result: " << result << endl;

        
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> operation;
    } while (operation == 'y' || operation == 'Y');

    cout << "Calculator program ended. SEE YOU SIRR !!\n";
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
