#include<iostream>
#include<cstdlib>
using namespace std;
const int SIZE=100;

int diagonalSum(int arr[][SIZE], int n)
{
	int i, j, sum1=0, sum2=0;
	for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
  
            // Condition for principal diagonal 
            if (i == j) 
                sum1 += arr[i][j]; 
  
            // Condition for secondary diagonal 
            if (i  == (n-1-j)) 
                sum2 += arr[i][j]; 
        } 
    } 
	cout<<abs(sum1-sum2);
}
int main ()
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
	diagonalSum(arr, order);
}
