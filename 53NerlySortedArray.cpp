#include<iostream>
#include<vector>
using namespace std;


//binary search on nearly sorted array 
//sorted array  10 20 30 40 50 60 70
//nearly sorted 20 10 30 50 40 70 60

//sorted array ka i th position
//nearly sorted me n-1 n n+1 is 3 position me kahi bhi ho sakta hai


int search (vector<int> arr, int n, int target)
{
	int start=0;
	int end=n-1;
	
	int mid=(start+end)/2;
	
	
	while(start<= end)
	{
		if (arr[mid]==target)
		{
			return mid;
		}
		if (arr[mid+1]==target   && mid+1< n)
		{
			return mid+1;
		}
		if (arr[mid-1]==target  && mid -1 >=0)
		{
			return mid-1;
		}
		
		
		
		
		// update mid value be 2 
		// because n+1 n-1 n all are checked once befour
		else if(arr[mid] > target)
		{
			end= mid-2;			
		}
		else if (target> arr[mid])
		{
			start=mid+2;
		}
		
		//update mid
		mid=(start+end)/2;
	}
	return -1;
	
}







int main()
{
	vector<int> arr;
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;	
	
	for(int i=0;i<n;i++)
	{
		cout<<"Add data to "<<i<<" Index: ";
		int d;
		cin>>d;
		arr.push_back(d); 
	}
	
	
	int target;
	cout<<"The elemenet you want to find in nearly sorted array: ";
	cin>>target;
	
	cout<<"The index of target element in the array is : "<<search(arr,n,target);
	
	
	
}
