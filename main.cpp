#include <iostream>
#include <cmath>

using namespace std;

// Function stub/function signature
void sayHi(string name, int age);

int main()
{
    sayHi("Mike", 59);
    sayHi("Paul", 29);
    return 0;
}


void sayHi(string name, int age) {
    cout << "Hello " << name << ", you are " << age <<endl;
}