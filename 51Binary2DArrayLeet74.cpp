#include<iostream>
#include<limits>
using namespace std;






bool Search(int arr[][4],int row,int col, int target)
{
	int n=row*col;
	
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	
	while(start<= end)
	{
		//steps to conver 2D array in 1D array
		int rowIndex=mid/col;
		int colIndex=mid%col;
		int currentNumber=arr[rowIndex][colIndex];
		
		
		// now perform binary search
		if(currentNumber== target)
		{
			return true;
		}
		else if(target>currentNumber)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		
		//update mid
		mid=(start+end)/2;
		
			
	}
	return false;
}

	
	
	








int main()
{
	int arr[4][4];
	int row=4,col=4;

	
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
	
	
	int target;
	cout<<"The elemenet you want to find in 2D array: ";
	cin>>target;
	
	
	bool found=Search(arr,row,col,target);
	
	
	if(found)
	{
		cout<<target<<" Element found"<<endl;
	}
	else
	{
		cout<<target<<" Element not found"<<endl;
	}
	
}
