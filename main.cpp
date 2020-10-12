#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string firstWord, adjective, noun;

    cout << "Enter first word: ";
    getline(cin, firstWord);

    cout << "Enter adjective: ";
    getline(cin, adjective);

    cout << "Enter noun: ";
    getline(cin, noun);

    cout << firstWord << " is a man" <<endl;
    cout << "He goes to " << adjective <<endl;
    cout << "This is" << noun << "wrong" <<endl;
    return 0;
}