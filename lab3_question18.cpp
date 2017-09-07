#include <iostream>
using namespace std;

int main() {
	float CP, SP, profit, loss,n;
	cout<<"enter cost price\n";
	cin>>CP;
	cout<<"enter selling price\n";
	cin>>SP;
	n=CP-SP;
	if(n>0)
		cout<<"Profit : "<<n;
	else
		if(n<0)
    			cout<<"Loss : "<<-(n);
		else
			cout<<"No profit no loss";
	return 0;
}
