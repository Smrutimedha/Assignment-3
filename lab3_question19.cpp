#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Marks:\n";
	cin>>marks;
	if(marks>=90 && marks<=100)
		cout<<"Your Grade is A";
	else if(marks>=80 && marks<90)
		cout<<"Your Grade is B";
	else if(marks>=70 && marks<80)
		cout<<"Your Grade is C";
	else if(marks>=60 && marks<70)
		cout<<"Your Grade is D";
	else if(marks>=40 && marks<60)
		cout<<"Your Grade is E";
	else if(marks>=0 && marks<40)
		cout<<"Your Grade is F";
	else
		cout<<"Invalid Marks.";	
	return 0;
}
