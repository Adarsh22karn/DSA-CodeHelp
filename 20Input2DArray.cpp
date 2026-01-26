#include<iostream>
#include<limits>
using namespace std;






void printA(int arr[][3],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
}







int main()
{
	int arr[3][3];
	int row=3,col=3;

	
	for (int i=0;i<row;i++)
	{
		cout<<"Enter the valve at"<<i<<" row "<<endl;
		for (int j=0;j<col;j++)
		{
			cout<<"Enter the valve at "<<j<<" column "<<" :";
			cin>>arr[i][j];	
		}
		cout<<endl;
	}
	
	
	printA(arr,row,col);
	
}
