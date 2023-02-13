#include <iostream>
using namespace std;

long long fact(int num) {
    if(num <= 1) {
        return 1;
    }

    return num * fact(num-1);
}

int main() {
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Factorial of " << num << " : " << fact(num);

    return 0;
}