#include <iostream>
using namespace std;
int main ()
{
int a;
cout << "enter a week day number\n";
cin >> a;
if(a==1)
cout << "The day is Monday\n";
else if(a==2)
cout << "The day is Tuesday\n";
else if(a==3)
cout << "The day is Wednesday\n";
else if(a==4)
cout << "The day is Thursday\n";
else if(a==5)
cout << "The day is Friday\n";
else if(a==6)
cout << "The day is Saturday\n";
else if(a==7)
cout << "The day is Sunday\n";
else
cout << "invalid entry\n";
return 0;
}
