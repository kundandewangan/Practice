#include<iostream>
using namespace std;

int primeNumbers(int num1, int num2)
{
	int i, j, flag;
	for(i=num1; i<num2; i++)
	{
		// Skip 1 as1 is niether 
        // prime nor composite
		if (i == 1) 
            continue;
	        // flag variable to tell 
        // if i is prime or not 
		flag=1;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		// flag = 1 means i is prime 
        // and flag = 0 means i is not prime 
		if(flag==1)
		cout<<i;
	}	
}
int main()
{
	int num1, num2, swap;
	cout<<"Enter the numbers between which you want all the primes"<<endl;
	cin>>num1>>num2;
	if(num1>num2)
	{
		swap=num1;
		num1=num2;
		num2=swap;
	}
	primeNumbers(num1, num2);
}











