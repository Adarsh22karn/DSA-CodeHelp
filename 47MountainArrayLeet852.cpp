#include<iostream>
#include<vector>
using namespace std;




//peak element in mountain array
//leetcode 852
//array={10,20,50,40,30}
//a- 10 20 50
//b- 50 40 30 
//in A case arr[i]<arr[i+1]
//in b case arr[i]> arr[i+1]
//peak point i.e 50 arr[i-1]<arr[i]>arr[i+1];
//merge all 3 condint in 1 condition 
//arr[i]>arr[i+1]  it lies in A
//else it ilies in b or it is a peak element


int mountain(vector<int> arr, int n)
{
	int start=0, end=n-1;
	int mid=(start+end)/2;
	
	while(start<end)
	{
		if (arr[mid]<arr[mid+1] )

		//in A line
			{
				//peak right me exist karti hai
				start=mid+1;
			}
			else
			{
				//in b line
				//ya to peak element me hu
				end=mid;
			}
			
			//update mid
			mid=(start+end)/2;
	}
	//can return start and end both only 1 box left
	return arr[start];
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
	
	cout<<"The mountain element in the array is : "<<mountain(arr,n);	
	
	
}
