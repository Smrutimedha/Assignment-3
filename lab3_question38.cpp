#include<iostream>
using namespace std;
int main()
{
   int n,num,d,rev=0;
    cout<<"Enter any number: ";
    cin>>n;
    num=n;
    do
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }while(n!=0);
 
    if(num==rev)
        cout<<"Number is Palindrome"<<endl;
    else
        cout<<"Number is not Palindrome"<<endl;
 
    return 0;
}
