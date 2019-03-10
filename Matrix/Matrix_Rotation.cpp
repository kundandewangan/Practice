#include<iostream>
using namespace std;
const int SIZE=100;

void rotate(int a[][SIZE], int n)
{
	int i, j, temp;
	
	//rotating anti clockwise
	for(i=0; i<n/2; i++)//i=n/2 is the max number of times for the rotation will occur
	{
		for(j=i; j<n-i-1; j++)
		{
			
			//Storing top of the array
			temp=a[i][j];
			
			//swapping right to the top
			a[i][j]=a[j][n-i-1];
			
			//swapping bottom to the right
			a[i][n-i-1]=a[n-i-1][n-j-1];
			
			//swapping left to the bottom
			a[n-i-1][n-j-1]=a[n-j-1][i];
			
			//swapping top to the left
			a[n-j-1][i]=temp;	
			
			/*
				rotating clockwise
			temp=a[i][j];
			a[i][j]=a[n-j-1][i];
			a[n-j-1][i]=a[n-1-i][n-1-j];
			a[n-1-i][n-1-j]=a[j][n-i-1];
			a[j][n-i-1]=temp;
			*/
		}
	}
}
int main()
{
	int order, i, j, arr[100][100];
	cout<<"Enter the order of matrix"<<endl;
	cin>>order;
	cout<<"Enter the elements"<<endl;
	for(i=0; i<order; i++)
	{
		for(j=0; j<order; j++)
			cin>>arr[i][j];
	}
	rotate(arr, order);
	for(i=0; i<order; i++)
	{
		for(j=0; j<order; j++)
			cout<<arr[i][j];
		cout<<endl;
	}
}
