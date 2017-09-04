#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int a;
cout << "enter a number\n";
cin >> a;
if(a%5==0 && a%11==0)
cout << a <<" is divisible by both 5 and 11\n";
else if(a%5==0)
cout << a <<" is divisible by 5\n";
else if(a%11==0)
cout << a <<" is divisible by 11\n";
else
cout << a <<" is not divisible by 5 or 11\n";
return 0;
}
