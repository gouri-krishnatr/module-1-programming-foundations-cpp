#include <iostream>
using namespace std;
 int main()
 {
    double a, b;
    int op;
    cout << " Enter first number:";
    cin >> a;
    cout << " Enter second number:";
    cin >> b;
    cout << "1. Add" << endl;
    cout << "2. subtract" << endl;
    cout << "3. multiply" << endl;
    cout << "4. division" << endl;
    cout << " choose: ";
    cin >> op;
    switch (op)
    {
        case 1:
        cout << a + b;
         break;
         case 2:
         cout  << a - b;
         break;
         case 3:
         cout << a * b;
         break;
         case 4:
         cout << a / b;
         break;
         default:
         cout << " wrong choice ";

    

 }
         return 0;
}