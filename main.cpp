#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;
    
    cout << "Age: " << pAge <<endl;
    cout << "Gpa: " << pGpa <<endl;
    cout << "Name: " << pName <<endl;

    // Dereferencing a pointer
    cout <<  *pAge << endl;
    cout << *&gpa << endl;
    return 0;
}