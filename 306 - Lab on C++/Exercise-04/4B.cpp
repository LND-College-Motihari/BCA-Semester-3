#include <iostream>
using namespace std;

/*

int sumFact(long long f) {
    return (f < 10) ? f : (f%10) + sumFact(f/10);
}
  
long long fact(int num) {
    return (num <= 1) ? 1 : num * fact(num-1); 
}

*/

int sumFact(long long f) {
    if(f == 0) {
        return 0;
    }
    
    int digit = f % 10;
    
    return digit + sumFact(f/10);
}
  
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
  
    cout << "Factorial of " << num << " : " << fact(num) << endl;
    cout << "Sum of factorial is : " << sumFact(fact(num)) << endl;
     
    return 0; 
}
