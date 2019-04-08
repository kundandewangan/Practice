//refer mycodeschool video and geeks4geeks

#include<iostream>
using namespace std;
const int SIZE=1000;

void merge(int arr[], int left, int middle, int right)
{
	//size of left array
	int leftSize = middle - left + 1;
	
	//size of right array
	int rightSize = right - middle;
	
	//i is index of left array, j for right and k for the merged array
	int i=0,j=0,k=0;
	
	//temporary arrays for storing values
	int leftArr[leftSize], rightArr[rightSize];
	
	//copying the elements from the main array to the temporary arrays
	for(i=0; i<leftSize; i++)
		leftArr[i] = arr[left + i];
	
	for(j=0; j<rightSize; j++)
		rightArr[j] = arr[middle + j + 1];
		
	while( i < leftSize && j < rightSize )
	{
		if(leftArr[i] <= rightArr[j])
		{
			arr[k]=leftArr[i];
			i++;	
		}
		else
		{
			arr[k]=rightArr[j];
			j++;
		}
		k++;
	}	
	//copying the remaining array
	while(i<leftSize)
	{
		arr[k]=leftArr[i];
		i++;
		k++;
	}
	while(j<rightSize)
	{
		arr[k]=rightArr[i];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int middle= left + (right-1)/2;
		mergeSort(arr, left, middle);
		mergeSort(arr, middle+1, right);
		merge(arr, left, right , middle);
	}
}

int main ()
{
	int size,i,arr[SIZE];
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the array"<<endl;
	for(i=0; i<size; i++)
		cin>>arr[i];
	mergeSort(arr,0,size-1);
	cout<<"array is "<<endl;
	for(i=0; i<size; i++)
		cout<<arr[i];
}
