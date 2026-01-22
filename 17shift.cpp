#include<iostream>
#include<limits>
using namespace std;



void shift(int arr[], int n)
{
	cout<<arr[n-1]<<" ";
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}







int main()
{
	int arr[5];
	int n=5;

	
	for (int i=0;i<n;i++)
	{
		cout<<"Enter the valve at index "<<i<<" :";
		cin>>arr[i];
		cout<<endl;
	}
	
	
	shift(arr,n);
}
