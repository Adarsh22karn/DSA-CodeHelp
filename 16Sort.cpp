#include<iostream>
#include<limits>
using namespace std;


//input 010110
//output 000111
//three approach
//1 counting
//2 two pointers
//3. sort() 


void sort(int arr[] ,int n)
{
	int count=0,t=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]==0)
		{
			count++;
		}
	}
	
	
	
	for (int j=0;j<n;j++)
	{
		if (arr[j]==1)
		{
			t++;
		}
	}
	
	
	for (int i=0;i<count;i++)
	{
		cout<<"0 ";
	}
	
	for (int i=0;i<t;i++)
	{
		cout<<"1 ";
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
	
	sort(arr,n);
}
