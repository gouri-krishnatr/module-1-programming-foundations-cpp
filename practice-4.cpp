#include <iostream>
using namespace std;
 int main()
 {
    string name;
    int rollNo;
    float marks;

    cout << " Enter your name:";
    getline(cin,name);

    cout << "Enter your roll number:";
    cin >> rollNo;
    cin.ignore();

    cout << " Enter your marks:";
    cin >> marks;

    cout << "\n---Student Record---\n";
    cout << "RollNo: " << rollNo << endl;
    cout << " Name: " << name << endl;
    cout << " Marks: " << marks << endl; 

    return 0;
 }  