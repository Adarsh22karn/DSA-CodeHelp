#include<iostream>
#include<limits.h>
using namespace std;


//0000
//0011
//1111
//0000
//if we use vector in this problem 
//no of row can be found by mat.size();
//no of columns can be found by mat[i].size();

void maxone(int mat[][100] ,int m,int n)
{
	int onecount=INT_MIN;
	//row will store index of max no of 1's 
	int row;
	for (int i=0;i<m;i++)
	{
		//after every row traversing count value should be zero
		int count=0;
		for (int j=0;j<n;j++)
		{
			if(mat[i][j]==1)
			{
				count++;
			}
			
		}
		if(count>onecount)
		{
			onecount=count;
			row=i;
		}
	}
	
	cout << "Row with maximum 1s: " << row << " (Count: " << onecount << ")" << endl;
		
}



int main()
{
	int m,n;
	cout<<"Enter the size of Array row: ";
	cin>>m;
	
	cout<<"Enter the size of Array col: ";
	cin>>n;
	
	int mat[100][100];
	
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<"Enter the valve at index "<<i<<" column "<<j<<" :";
			cin>>mat[i][j];
		}
		cout<<endl;
	}
	
	maxone(mat,m,n)	;
}
