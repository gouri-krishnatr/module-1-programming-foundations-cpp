#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >=90)

    cout << " you got an A grade.";
     
    else if (marks >=80)

    cout << " you got an B grade.";

    else if (marks >=70)

    cout << " you got an C grade.";
     
    else if (marks >=60)

    cout << " you got an D grade.";

    else 
      
    cout << " you got F grade.";
    return 0;
}