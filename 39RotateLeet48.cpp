#include<iostream>
#include<algorithm>
using namespace std;



//123  		741
//456		852	
//789		963
//we will approach this proble in two steps 
//first step in which we will print transpose of the array
//second step in which will reverse the transpose
//in vector to reverse we use reverse(arr.begin(),arr.end());
//in array to reverse we use reverse(arr,arr+n)





void rotate(int mat[][100], int m, int n)
{
	//transpose
	for (int i=0;i<m;i++)
	{
		for (int j=i;j<n;j++)
		{
			swap( mat[i][j] , mat[j][i] );
		}
	}
	
	
	for (int i = 0; i < m; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(mat[i][start], mat[i][end]);
            start++;
            end--;
        }
    }
	

	
	
	//traverse
	for (int i=0;i<m;i++)
	{

		for (int j=0;j<n;j++)
		{
			
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}	
	
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
	
	rotate(mat,m,n)	;
}
