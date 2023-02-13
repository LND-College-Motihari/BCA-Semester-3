#include <iostream>
using namespace std;

int int_reverse(int num) {
    int rev = 0;

    while(num) {
        rev = (rev*10) + (num%10);
        num /= 10;
    }

    return rev;
}

void void_reverse(int num) {
    int rev = 0;

    while(num) {
        rev = (rev*10) + (num%10);
        num /= 10;
    }

    cout << "Reversed number : " << rev;
}

int main() {

    int num;

    cout << "Enter the number : ";
    cin >> num;

    int choice;

    cout  << "1 : Calculate using fucntion with return type" << endl;
    cout << "2 : Calculate using fucntion without return type" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Reversed number : " << int_reverse(num);
            break;
        case 2:
            void_reverse(num);
            break;
        default:
            cout << "Invalid Input!" << endl;
    }

    
    return 0;
}