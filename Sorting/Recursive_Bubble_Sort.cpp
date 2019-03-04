#include<iostream>
using namespace std;

int recursiveBubbleSort(int arr[], int n)
{
	int i, temp;
	if(n==1)
		return 1;
	for(i=0; i<n-1; i++)
	{
		
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	recursiveBubbleSort(arr, n-1);
}
int main()
{
	int n, arr[1000];
	cout<<"Enter the number of elements"<<endl;
	cin>> n;
	cout<<"Enter the array elements"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	recursiveBubbleSort(arr,n);
	for(int i=0; i<n; i++)
		cout<<arr[i];	
}
