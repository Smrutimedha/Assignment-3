#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout <<"enter 3 sides\n";
cin >> a >> b >> c;
if(a<b+c && b<a+c && c<a+b)
cout << "the triangle is valid\n";
else
cout << "the triangle is not valid\n";
return 0;
}
