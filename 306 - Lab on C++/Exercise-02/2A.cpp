#include <iostream>
using namespace std;

struct employee {
    string name, desg;
    int age, salary;
};

int main() {

    employee company[5];

    for(int i=0; i<5; i++) {
        cout << "For employee no : " << i+1 << endl;

        cout << "Enter employee's name : ";
        cin >> company[i].name;
        
        cout << "Enter employee's age : ";
        cin >> company[i].age;
        
        cout << "Enter employee's designation : ";
        cin >> company[i].desg;

        cout << "Enter employee's salary : ";
        cin >> company[i].salary;
    }

    for(int i=0; i<5; i++) {
        cout << "For employee no : " << i+1 << endl;

        cout << "Employee's name : " << company[i].name << endl;
        cout << "Employee's age : " << company[i].age << endl;
        cout << "Employee's designation : " << company[i].desg << endl;
        cout << "Employee's salary : " << company[i].salary << endl;

        cout << endl << endl;
    }

    return 0;
}