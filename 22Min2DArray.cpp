#include<iostream>
#include<limits>
using namespace std;





void min(int arr[][3], int row,int col)
{
	int minAns=INT_MAX;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j] < minAns)
			{
				minAns=arr[i][j];
			}
		}
	}
	cout<<"Minimum value from all the elements is: "<<minAns<<endl;;
}






void max(int arr[][3], int row,int col)
{
	int minAns=INT_MIN;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j] > minAns)
			{
				minAns=arr[i][j];
			}
		}
	}
	cout<<"Miximum value from all the elements is: "<<minAns<<endl;;
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
	
	min(arr,row,col);
	max(arr,row,col);
}
