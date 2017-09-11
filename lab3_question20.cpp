#include <iostream>
using namespace std;
int main() {
double salary, gross salary, hra, da;
cout << "Enter the salary\n";
cin >>salary;
if(salary<=10000)
}
hra = 0.2*salary;
da = 0.8*salary;
}
else if(salary<=20000)
{
hra = 0.25*salary;
da = 0.9*salary;
}
else if(salary>20000)
{
hra = 0.3*salary;
da = 0.95*salary;
}
gross salary =  salary+hra+da ;
cout <<"Gross income = "<<gross<<"\n";
return 0;
}
