#include<iostream>
using namespace std;
float calculateBonus(float salary, int rating)
{
	float bonus=0;
	if (rating==5)
	{
		bonus=salary*0.20;
	}
	else if(rating==4)
	{
		bonus=salary*0.10;
	}
	else if(rating==3)
	{
		bonus=salary*0.05;
	}
	else
	{
		bonus=0;
	}
	return bonus;
}
void displayBonus(float salary,float bonus)
{
	cout<<"\nBonus Amount:"<<bonus<<endl;
	cout<<"Final Salary:"<<salary+bonus<<endl;
}
int main()
{
	float salary;
	int rating;
	cout<<"enter salary:";
	cin>>salary;
	cout<<"enter rating:";
	cin>>rating;
	float b=calculateBonus(salary, rating);
	displayBonus(salary,b);
	return 0;
}