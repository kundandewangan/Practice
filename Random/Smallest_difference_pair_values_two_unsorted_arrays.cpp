#include <iostream>
#include <cstdlib>
#include <cstdint>

const int MAX=2147483647;
using namespace std;

void selecSort(int a[], int n)
{
    int i,j,temp,minIndex;
    for(i=0; i<n-1; i++)
    {
        minIndex=i;
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
                minIndex=j;
        }
        
        //swapping the elements in increasing order
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
}
int findSmallestDifference(int a[], int b[], int n, int m)
{	
	int i=0, j=0, diff=MAX;
	
	//sorting both arrays using selection sort
    selecSort(a,n);
    selecSort(b,n);

    while(i<n && j<m)
    {
    	//updating diff 
        if(abs(a[i]-b[j]<diff))
            diff=abs(a[i]-b[j]);
            
        //updating index of 1st array for accessing next elements
        if(a[i]<b[j])
            i++;
        //updating index of 2nd array for accessing next elements    
        else
            j++;
    }
    return diff;
}

int main()
{
    // Input given array A
    int A[] = {1, 2, 11, 5};

    // Input given array B
    int B[] = {4, 12, 19, 23, 127, 235};
    
    // Calculate size of Both array
    int m = sizeof(A) / sizeof(A[0]);
	int n = sizeof(B) / sizeof(B[0]);

    cout << findSmallestDifference(A, B, m, n);
    return 0;
}
