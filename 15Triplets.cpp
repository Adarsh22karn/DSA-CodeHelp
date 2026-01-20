#include<iostream>
#include<limits>
using namespace std;






void tripletes(int arr[] ,int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<n;k++)
			{
				cout<<"("<<arr[k]<<" "<<arr[j]<<" "<<arr[i] <<")";
			}
					
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
	
	tripletes(arr,n);
}
