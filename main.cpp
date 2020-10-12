#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // cout << "You are " << age << " years old.";

    string name;
    cout << "Enter your name: " << endl;
    // If we want to get a string of text
    getline(cin, name);
    // cin >> name;

    cout << "Hello " << name;
    return 0;
}