#include <iostream>
using namespace std;
int main ()
{
float a,b,c;
cout << "enter 3 angles of a triangle in degrees\n";
cin >> a >> b >> c;
if(a+b+c==180)
cout << "The triangle is valid\n";
else
cout << "The triangle is not valid\n";
return 0;
}
