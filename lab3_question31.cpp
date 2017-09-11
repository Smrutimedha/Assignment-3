#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Log 10 is " << log10(n) << endl;
    cout << "Digits are " << ceil(log10(fabs(n)+1)) << endl;
    return 0;
}
