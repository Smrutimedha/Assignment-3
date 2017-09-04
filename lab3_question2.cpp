#include <iostream>
using namespace std;
int main ()
{
int a,b,c;
cout << "enter three numbers\n";
cin >> a >> b >> c;
if(a>=b && a>=c)
cout << a <<" is maximum\n";
else if(b>=a && b>=c)
cout << b <<" is maximum\n";
else
cout << c <<"is maximum\n";
return 0;
}
