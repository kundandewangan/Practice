#include<iostream>
using namespace std;
/*
	Interpolation search uses the formula for finding position of number towards one of the ends of the array from the starting end of array
	formula is 
		position=  low index + ( high_index - low_index )*( value_to_be_searched - arr[low_index] ) / ( arr[high_index]-arr[low_index] )  
		
	we run the loop till the number is found
		if arr[low_index]< value then update with low_index ++ 
		if arr[high_index]> value then update with high_index --
		and after every interval position is updated with new value and the process continues
*/
int interpolationSearch(int arr[], int n, int value)
{
	int low_index=0, high_index=n-1, position;
	while(low_index<=high_index && value>=arr[low_index] && value<=arr[high_index])
	{
		if (low_index==high_index)
		{
			if(arr[low_index]==value)
				return low_index;
			return -1;
		}
		position=low_index + (double( (high_index-low_index) / (arr[high_index]-arr[low_index]) ) * (value-arr[low_index]));
		
		if(arr[position]==value)
		{
			cout<<"Index of "<<value<<" is "<<position;
			return position;
		}	
		if(arr[position]<value)
			low_index++;
		else
			high_index--;		
	}
	if(arr[position]!=value)
		cout<<"Not found";
}

int main ()
{
	int n, value, arr[1000];
	cout<<"Enter the length of array"<<endl;
	cin>> n;
	cout<<"Enter the array elements"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"Enter the value to be searched"<<endl;
	cin>>value;
	interpolationSearch(arr,n,value);
	
}
