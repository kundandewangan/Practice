//for video explaination refer Codeschool video on youtube.
#include<iostream>
using namespace std;

quickSort(int arr[], int n)
{
	int value, hole, i;
	for(i=1; i<n; i++)
	{
		value=arr[i];
		hole=i;
		while(hole>0 && (arr[hole-1]>value))
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value;
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
	quickSort(arr, n);
	for(int i=0; i<n; i++)
		cout<<arr[i];
}
