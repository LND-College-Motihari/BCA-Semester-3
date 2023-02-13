#include <iostream>
using namespace std;

void swap_value(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap_reference(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main () {
    int num1, num2;

    cout << "Enter the first number  : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    
    int choice;
    cout << "\t1. Swap numbers by using call by value" << endl;
    cout << "\t2. Swap numbers by using call by value" << endl;
    cout << "\tEnter your choice : ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Before swapping : num1 = " << num1 << " and num2 = " << num2 << endl;
            swap_value(num1, num2);
            cout << "After swapping  : num1 = " << num1 << " and num2 = " << num2 << endl;
            break;
        case 2:
            cout << "Before swapping : num1 = " << num1 << " and num2 = " << num2 << endl;
            swap_reference(num1, num2);
            cout << "After swapping  : num1 = " << num1 << " and num2 = " << num2 << endl;
            break;
        default:
            cout << "Invalid Input!" << endl;
    }

    return 0;
}