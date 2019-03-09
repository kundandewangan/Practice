#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int number)
{
	int temp=number, remainder, sum=0, digits=0;
	
	//counting the number if digits in the number
	while(temp)
	{
		digits++;
		temp/=10;
	}
	
	//again assigning number to temp 
	temp=number;
	
	//loop will run till temp!=0 
	while(temp)
	{
		remainder=temp%10;
		sum+=pow(remainder,digits);
		temp/=10;
	}
	if(sum==number)
		cout<<"Yes";
	else
		cout<<"No";
}

int main()
{
	int number;
	cout<<"Enter the number"<<endl;
	cin>>number;
	//numberOfDigits(number);
	armstrong(number);
}
