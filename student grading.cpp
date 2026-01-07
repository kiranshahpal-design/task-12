#include<iostream>
using namespace std;
float calculatePercentage(float s1, float s2, float s3, float s4, float s5)
{
	return(s1+s2+s3+s4+s5)/5;
}
void displayResult(float percentage)
{
	cout<<"Percentage: "<<percentage<<"%"<<endl;
	if(percentage>=90)
	{
		cout<<"Grade: A+"<<endl;
	}
	else if(percentage>=80)
	{
		cout<<"Grade: A"<<endl;
	}
	else if(percentage>=70)
	{
		cout<<"Grade: B"<<endl;
	}
	else if(percentage>=60)
	{
		cout<<"Grade: C"<<endl;
	}
}
int main()
{
float m1, m2, m3, m4, m5;
cout<<"enter marks for 5 subjects:";
cin>>m1>>m2>>m3>>m4>>m5;
float per=calculatePercentage(m1, m2, m3,m4,m5);
displayResult(per);
return 0;
}