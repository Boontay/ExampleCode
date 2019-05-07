#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    int &r = i;

    cout << "Value of i: " << i << endl;
    cout << "Value of reference to i: " << r << endl;

    double d = 11.7;
    double& s = d;

    cout << "Value of d: " << d << endl;
    cout << "Value of reference to d: " << s << endl;

    return 0;
}
