#include<iostream>
#include<limits>
using namespace std;

//23 -7 12 -10 -1 40 60 
//-7 -10 -11 23 12 40 60
//1 sorting
//2 2 pointer approch 






void sort( int arr[],int n)
{
	int j =0;
	//j -> memory block hai jaha par negative no store kar sakta hu
	
	
	for(int index=0;index<n; index++)
	{
		if(arr[index]<0)
		
		{
			swap(arr[index],arr[j]);
			j++;
		}
		
	
	}	
}

int main()
{
	int arr[8];
	int n=8;

	
	for (int i=0;i<n;i++)
	{
		cout<<"Enter the valve at index "<<i<<" :";
		cin>>arr[i];
		cout<<endl;
	}
	
	sort(arr,n);
	
	
	
	//print array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

