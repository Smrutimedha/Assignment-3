#include<iostream>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5,sum,percentage;
	cout<<"Enter Marks in mathematics out of 100:\n";
	cin>>m1;
	cout<<"Enter Marks in Physics out of 100:\n";
	cin>>m2;
	cout<<"Enter Marks in chemistry out of 100:\n";
	cin>>m3;
	cout<<"Enter Marks in biology out of 100:\n";
	cin>>m4;
	cout<<"Enter Marks in computer out of 100:\n";
	cin>>m5;
	sum=(m1+m2+m3+m4+m5);
	percentage=(sum/500)*100;
	if(percentage>=90 && percentage<=100)
		cout<<"Your Grade is A";
	else if(percentage>=80 && percentage<90)
		cout<<"Your Grade is B";
	else if(percentage>=70 && percentage<80)
		cout<<"Your Grade is C";
	else if(percentage>=60 && percentage<70)
		cout<<"Your Grade is D";
	else if(percentage>=40 && percentage<60)
		cout<<"Your Grade is E";
	else if(percentage>=0 && percentage<40)
		cout<<"Your Grade is F";
	else
		cout<<"Invalid Marks.";	
	return 0;
}
