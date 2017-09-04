#include <iostream>
using namespace std;
int main ()
{
char a;
cout << "enter a character\n";
cin >> a;
if(a>='a' && a>='A' && a<='z' && a<='Z')
cout << a <<" is an alphabet\n";
else if(a>=0 && a<=9)
cout << a <<" is a digit\n";
else
cout << a <<" is a special character\n";
return 0;
}
