#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
	int i,j,minIndex;
	for(i=0; i<n-1; i++)
	{
		minIndex=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[minIndex])
				minIndex=j;
		}
		int temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
	
}

int main()
{
	int n, arr[1000];
	cout<<"Enter the number of elements"<<endl;
	cin>> n;
	cout<<"Enter the array elements"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	selectionSort(arr,n);
	for(int i=0; i<n; i++)
		cout<<arr[i];
	
	
}
