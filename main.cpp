#include <iostream>
#include <cmath>

using namespace std;

double cube(double num) {
    double result = num * num * num;
    return result;
}
int main()
{
    double ans = cube(3.2);
    cout << ans << endl;
    return 0;
}