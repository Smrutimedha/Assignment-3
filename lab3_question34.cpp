#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, swno;
    int fd, ld, digits;
    cout<<"Enter any number:";
    cin>>num;
    ld = num % 10; 
    digits = (int)log10(num); 
    fd = (int)(num / pow(10, digits)); 
    swno = ld;
    swno *= (int)pow(10, digits);
    swno += num % ((int)pow(10, digits));
    swno -= ld;
    swno += fd;
    cout<<"\nOriginal number = "<<num;
    cout<<"\nNumber after swapping first and last digit: "<<swno;
    return 0;
}
