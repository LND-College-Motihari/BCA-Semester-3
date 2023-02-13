#include <bits/stdc++.h>
using namespace std;

 union student {
    char name[50];
    int age, yos, sem;
    int marks[5];
    char grade;
};

int main() {
    student stud;

    cout << "Enter student's name : ";
    cin >> stud.name;

    cout << "Enter student's age : ";
    cin >> stud.age;
    
    cout << "Enter the year of study : ";
    cin >> stud.yos;

    cout << "Enter student's semester : ";
    cin >> stud.sem;
    
    int total = 0;

    for(int i=0; i<5; i++) {
        cout << "Enter the marks in subject " << i+1;
        cin >> stud.marks[i];
        total += stud.marks[i];
    }

    total /= 5;

    if(total >= 90) {
        stud.grade = 'S';
    } else if(total >= 80) {
        stud.grade = 'A';
    } else if(total >= 70) {
        stud.grade = 'B';
    } else if(total >= 60) {
        stud.grade = 'C';
    } else if(total >= 50) {
        stud.grade = 'D';
    } else {
        stud.grade = 'F';
    }

    cout << "Students's name : " << stud.name << endl;
    cout << "Students's age : " << stud.age << endl;
    cout << "Students's year of study : " << stud.yos << endl;
    cout << "Students's semester : " << stud.sem << endl;

    for(int i=0; i<5; i++) {
        cout << "Marks in subject " << i+1 << " : " << stud.marks[i] << endl;
    }

    cout << "Students's grade : " << stud.grade << endl;

    return 0;
}