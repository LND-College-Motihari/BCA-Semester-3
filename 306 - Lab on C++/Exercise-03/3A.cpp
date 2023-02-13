#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char str[100];

    cout << "Enter the string : ";
    gets(str);
    
    char *ptr = str;
    int vowelCount = 0;
    int len = strlen(str);

    while(len--) {
        if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I'
            || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e'
            || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
                vowelCount++;
        }
        
        ptr++;
    }

    cout << "Total count of vowels : " << vowelCount << endl;

    return 0;   
}