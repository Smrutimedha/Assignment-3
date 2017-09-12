#include <iostream>
using namespace std;
int main() {
int no,sum=1,rem=0;
cout<<"enter a number ";
cin>>no;
while(no>0)
{  
rem=no%10;
sum=sum*rem;
no=no/10;
}
cout<<"the product of digits is " <<sum;
return 0;
}
