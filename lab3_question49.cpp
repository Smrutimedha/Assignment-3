#include <iostream>
using namespace std;
int main()
{
int  num=0,  tnum=0, sum=0;
cout<<"\nEnter the number ";
cin>>num;
int j=2;
cout<<endl<<endl;
while(j<=num)
{
int count=0;
tnum=j;
for(int i=2;i<tnum;i++)
{
if(tnum%i==0)
count++;
}
if(count==0)
sum+=tnum;
j++;
}
cout<<"\n\nThe sum of all prime numbers from 1 to "<<num<<" is "<<sum;
return 0;
}
