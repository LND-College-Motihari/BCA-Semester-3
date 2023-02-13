#include <iostream>
using namespace std;

int main() {
    
    int n = 5;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << "  ";
        }

        for(int j=0; j<2*i+1; j++) {
            cout << i+1 << " ";
        }

        cout << endl;
    }

    cout << endl << endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << "  ";
        }

        for(int j=1; j<=i+1; j++) {
            cout << j << " ";
        }
        
        for(int j=i; j>0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl << endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << "  ";
        }

        char ch = 65+i;
        for(int j=0; j<2*i+1; j++) {
            cout << ch << " ";
        }

        cout << endl;
    }

    cout << endl << endl;

    for(int i=0; i<n; i++) {
        int j = 0;
        char ch = 65+j;
        
        for(j=0; j<n-i; j++) {
            cout << "  ";
        }

        for(j=0; j<=i; j++) {
            cout << ch++ << " ";
        }
        
        for(ch-=2, j-=2; j>=0; j--) {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }



    return 0;
}