#include <iostream>
using namespace std;
int main ()
{
char a;
cout << "enter a charater\n";
cin >> a;
if(a>='a' && a<='z')
cout << a <<" is an alphabet\n";
else
cout << a <<" is not an alphabet\n";
return 0;
}
