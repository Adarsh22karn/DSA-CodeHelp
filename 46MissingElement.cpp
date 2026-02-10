#include<iostream>
#include<vector>
using namespace std;

//find missing no in a soerted array
//1 approch is linear search o(n)
//2 approch in Sum o(n)
//3 approch is using XOR function
//4 approch is using Binary Search O(logn)
// 1235678---4

int missing(vector<int> arr, int n)
{ 
	int start=0, end=n-1;
	int mid=(start+end)/2;
	int ans=-1;
	
	while(start<=end)
	{
		//index aur array ke bich ka value niklo
		int diff=arr[mid]-mid;
		
		if(diff==1)
		{
			start=mid+1;
		}
		else
		{
			//ans me value store kar lo
			ans=mid;
			end=mid-1;
		}
		
		//update mid
		mid=(start+end)/2;
	}
	
	return ans+1;
	  
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
	
	cout<<"The missing element in the array is : "<<missing(arr,n);	
	
	
}
