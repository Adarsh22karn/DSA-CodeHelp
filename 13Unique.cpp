#include<iostream>
#include<limits>
using namespace std;


void unique(int arr[], int n)
{
	int res=0;
	for(int i=0;i<=n;i++)
	{
		res=res^arr[i];
	}
	cout<<"The unique element from the array is: "<<res;
	
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
	
	unique(arr,n);
}
