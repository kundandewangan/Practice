
/*
	reversal algorithm for array rotation 
	idea for this problem is that we divide the main array into 2 halves then 
		we apply reversal on 1st part
	then reversal for the 2nd part
		at last for the whole array
	and we get the rotated array
		Let the parts be AB.
	after 1st rotation we get ArB.	//r stands for reverse
	after 2nd rotation we get ArBr.
	after 3rd rotation we get BA.
*/
#include <iostream>
using namespace std;
const int MAX=10000;

void reversal(int arr[MAX], int start, int end)
{
	while(start < end)
	{
		int temp=arr[start];
		arr[start]= arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotate(int arr[MAX], int size, int rotations)
{
	reversal(arr, 0, rotations-1);
	reversal(arr, rotations, size-1);
	reversal(arr, 0, size-1);
}

int main()
{
	int size, arr[MAX], rotations;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	cout<<"Enter array"<<endl;	
	for(int i=0; i<size; i++)
		cin>>arr[i];
	cout<<"Enter number of rotations"<<endl;
	cin>>rotations;
	rotate(arr, size, rotations);
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
}
