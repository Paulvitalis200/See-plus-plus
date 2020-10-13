#include <iostream>
#include <cmath>

using namespace std;


void sayHi(string name, int age) {
    cout << "Hello " << name << ", you are " << age <<endl;
}

int main()
{
    sayHi("Mike", 59);
    sayHi("Paul", 29);
    return 0;
}