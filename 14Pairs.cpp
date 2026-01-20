#include<iostream>
#include<limits>
using namespace std;



//10,20,30
//10 10/10 20/10 30
//20 10/20 20/20 30
//30 10/30 20/30 30


void pairs(int arr[] ,int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<"("<<arr[j]<<" "<<arr[i]<<")";		
		}
		cout<<endl;
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
	
	pairs(arr,n);
}
