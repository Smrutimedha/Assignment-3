#include <iostream>
using namespace std;
int main() {
int u, u1, u2;
double cost;
cout << "enter the number of units\n";
cin >>u;
if (u<=50)
{
cost = u*0.5;
}
else if (u<=150)
{
cost = 25 + ( u-50 )*0.75;
}
else if (u <=250)
{
cost = 25 + 75 + (u -150)*1.2;
}
else if (u > 250)
{
cost= 25 + 75 +120 + (u - 250)*1.5;
}
cout << " Total cost of electricity is " <<cost;
return 0;
}
