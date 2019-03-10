#include<iostream>
using namespace std;
const int SIZE=100;
 
 /*
 This is the first method. If we dry run a normal matrix using  pen and paper for 180degree rotation, 
 	we observe that the elements of the matrix are repositionted in reversed order, i.e, 1st element becomes last, 2nd element becomes 
	2nd last and so on. So idea here is to print the elements in reverse order.
*/
 
 //function for rotating the matrix by 180 degrees
void rotate180(int matrix[][SIZE], int order)
{
	int i, j;
	for(i=order-1; i>=0; i--)
	{
		for(j=order-1; j>=0; j--)
			cout<<matrix[i][j]<<"   ";	//giving horizontal spacing for better visibility and understanding.
		cout<<endl;
		cout<<endl;
	}
	
}
int main()
{
	int order, i, j, matrix[SIZE][SIZE];
	cout<<"Enter the order of matrix"<<endl;
	cin>>order;
	cout<<"Enter the elements of matrix"<<endl<<endl;
	
	for(i=0; i<order; i++)
		for(j=0; j<order; j++)
			cin>>matrix[i][j];
	
	rotate180(matrix, order);	
	
}
