#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a;
cout << "enter a year\n";
cin >> a;
if(a%4==0)
cout << a <<" is a leap year\n";
else
cout << a <<" is a general year\n";
return 0;
}
