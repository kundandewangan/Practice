#include<iostream>
using namespace std;

/*
	Palindrome is a number which is same from the start as well from the end. Eg, 121, 12321, etc.
	Idea here is to 1st get the remainder of the number then use it to make the reverse of the number.
	while loop will run till tem!=0 
*/


long long int palindrome(long long int n)
{
	long long int reverse=0, remainder, temp=n;
	while(temp)
	{
		remainder=temp%10;
		reverse = reverse*10 + remainder;
		temp/=10;
	}
	if(reverse==n)
		cout<<"Its palindrome";
	else
		cout<<"NOT";
}

int main()
{
	long long int number;
	cout<<"Enter the no to be checked"<<endl;
	cin>>number;
	palindrome(number);
}
