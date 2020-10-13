#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;
    if(!isMale || !isTall){
        cout << "Paul" << endl;
    } else if (isMale && isTall) {
         cout << "Naaaa" << endl;
    }
    else {
        cout << "You are not male" << endl;
    }
    return 0;
}