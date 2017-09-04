#include <iostream>
using namespace std;
int main ()
{
char a;
cout << "enter an alphabet\n";
cin >> a;
if(a>='A' && a<='Z')
cout << a <<" is an uppercase alphabet\n";
else
cout << a <<" is a lowercase alphabet \n";
return 0;
}
