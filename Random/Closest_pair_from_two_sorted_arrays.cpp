#include<iostream>
#include<cstdlib>
using namespace std;
const int MAX=2147483647;

selectionSort(int arr[], int n)
{
	int i, j, minIndex, temp;
	
	for(i=1; i<n-1; i++)
	{
		minIndex=i;
		for(j=0; j<n; j++)
		{
			if(arr[i]>arr[j])
			minIndex=j;
		}
		temp=arr[minIndex];
		arr[minIndex]=arr[j];
		arr[j]=arr[minIndex];
	}
}

void closestPair(int arr1[], int arr2[], int n1, int n2, int value)
{
	int i=0, j=n2-1, diff= MAX, index1, index2;		//i starts from 0 and j starts from end which is n2-1
	
	selectionSort(arr1, n1);
	selectionSort(arr2, n2);
	
	while(i<n1 && j>=0)
	{
		if( abs( arr1[i] + arr2[j] - value ) < diff )
		{
			index1=i;
			index2=j;
			diff=abs( arr1[i]+ arr2[j] - value );
		}
		
		// this is done to cover all the elements of both arrays 	
		if(  ( arr1[i] + arr2[j] ) < value  )	//if sum is less than value then increment i as we have sorted arrays and i starts from 0
			i++;
			
		else								//if sum is greater than value then decrement j as we have sorted arrays and j starts from end
			j--;
	}
	cout<<"The closest pair are: "<<arr1[index1]<<" "<<arr2[index2]<<endl;
}

int main()
{
	int i, n1, n2, arr1[1000], arr2[1000], value;
	
	cout<<"Enter the value to which you want to check the pairs"<<endl;
	cin>>value;
	
	cout<<"Enter the size of 2 arrays"<<endl;
	cin>>n1>>n2;
	
	cout<<"Enter the elements of array 1 "<<endl;
	for(i=0; i<n1; i++)
		cin>>arr1[i];
	
	cout<<"Enter the elements of array 2 "<<endl;
	for(i=0; i<n2; i++)
		cin>>arr2[i];
	
	closestPair(arr1, arr2, n1, n2, value);
}
