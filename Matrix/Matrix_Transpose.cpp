#include<iostream>
using namespace std;

void transpose(int arr[100][100], int size)
{
	int i,j;
	int arr2[100][100];
	for(int i=0; i<size; i++)
		for(j=0; j<size; j++)
			arr2[i][j]=arr[j][i];
	for(int i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
			{
			
			cout<<arr2[i][j];
		}	
		cout<<endl;
	}
}

int main ()
{
	int i,j,size, arr[100][100];
	cout<<"Enter size"<<endl;
	cin>>size;
	cout<<"Enter the matrix"<<endl;
	for(int i=0; i<size; i++)
		for(j=0; j<size; j++)
			cin>>arr[i][j];
	transpose(arr, size);
}
