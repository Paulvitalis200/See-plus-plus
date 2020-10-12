#include <iostream>

using namespace std;

int main()
{
    string characterName = "Kim";
    int age = 23;
    char grade = 'A';
    string phrase = "Giraffe Academy";
    float numFloat = 23.0;
    double gpa = 2.3;
    bool men = true;

    string phrasesub;
    phrasesub = phrase.substr(8,3);
    characterName[0] = 'B';
    cout << characterName[0] << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrasesub;
    return 0;
}