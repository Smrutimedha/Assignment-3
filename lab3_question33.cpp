#include <iostream>
using namespace std;
 
int main() {
	int n;
	cout<<"enter a number ";
	cin>>n;
	int rem,rem2;
	rem=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	rem2=n%10;
	cout<<"Sum= "<<rem+rem2;
	return 0;
}
