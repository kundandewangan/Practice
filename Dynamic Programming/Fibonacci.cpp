#include<iostream>
using namespace std;

void fibonacci(int n)
{
	// creating a memoized array to store the values. taking n+1 to handle n=0. 
	int i,memo[n+1];
	memo[0]=0,memo[1]=1; 
	for(i=2; i<=n; i++)
	{
		memo[i]=memo[i-1]+memo[i-2];
	}
	cout<<memo[n];
}

int main()
{
	int n;
	cout<<"Enter the nth term"<<endl;
	cin>>n;
	fibonacci(n);
}
