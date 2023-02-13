#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter the limit of elements in the series : ";
    cin >> limit;

    if(limit < 1) {
        cout << "Invalid range!";
    } else {
        int a=0, b=1, c=1;

        cout << "Fibonacci series : 0 ";

        for(limit--; limit>0; limit--) {
            cout << c << " ";
            c = a + b;

            a = b;
            b = c;
        }
    }
    
    return 0;
}