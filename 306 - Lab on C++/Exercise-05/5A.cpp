#include <iostream>
using namespace std;

inline int add(int x, int y) {return x+y;}
inline int sub(int x, int y) {return x-y;}
inline int pdt(int x, int y) {return x*y;}
inline int mod(int x, int y) {return x%y;}
inline int divd(int x, int y) {return x/y;}

int main() {
    int num1, num2;
    char opt;

    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    cout << "Enter the operation you want to perform (+, -, *, %, /) : ";
    cin >> opt;

    switch(opt) {
        case '+':
            cout << "Answer : " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Answer : " << sub(num1, num2) << endl;
            break;
        case '*':
            cout << "Answer : " << pdt(num1, num2) << endl;
            break;
        case '%':
            cout << "Answer : " << mod(num1, num2) << endl;
            break;
        case '/':
            cout << "Answer : " << divd(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }

    return 0;
}