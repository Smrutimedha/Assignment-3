#include <iostream>
using namespace std;
int main ()
{
int a;
cout << "enter month number\n";
cin >> a;
if(a==1 && a==3 && a==5 && a==8 && a==7 && a==10 && a==12)
cout << "The number of days=31\n";
else if(a==4 && a==6 && a==9 && a==11)
cout << "The number of days=30\n";
else if(a==2)
cout << "The number of days is either 28 or 29\n";
else
cout << "the value must be > 0 and < 13\n";
return 0;
}
