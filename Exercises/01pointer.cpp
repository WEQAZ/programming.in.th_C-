//Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
//There are also two integer pointers named ptrA and ptrB. 
//Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int *ptrA,*ptrB;
    cout << "Enter integer a : ";
    cin >> a;
    cout << "Enter integer b : ";
    cin >> b;

    ptrA = &b;
    ptrB = &a;

    cout << endl << *ptrA;
    cout << " " << *ptrB;

    return 0;
}