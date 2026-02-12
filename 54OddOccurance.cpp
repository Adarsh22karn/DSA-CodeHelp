#include<iostream>
#include<vector>
using namespace std;

//find the odd occurring element 
//in this array all element occur even mo of times except one element 
//all repeating no are in pairs and no adjacent pairs and no pair repeated
//ek baar me koi bhi no 2 se jayda baar nahi aa sakta 
//1 1 5 5 2 2 3 3 2 4 4 
//ans = 2
//
//1 Approch XOR
//2 count using map
//3 sorting any no comes 3 times odd times
//4 Approch Binary search
//
//ans ke left me jau pair wise check karu 
//pair ka first element even index par hoga
//pair ka second element odd index per hoga 
//
//ans ke right me jau pair wise check karu 
//pair ka first element odd index par hoga
//pair ka second element even index per hoga
//
//ans will be only on even index 
//
//in single elemnt case the valve of index will be equal to ans





int oddOccurance(vector <int> arr, int n)
{
	int start=0;int end=n-1;
	int mid=(start+mid)/2;
	
	while(start<end)
	{
		if(start==end)
		{
			return start;
		}
		
		if(mid &1) //check mid is odd or not 
		{
			if(arr[mid-1]==arr[mid])
			{
				start=mid+1;
			}
			else
			{
				end=mid-1;
			}
		}
		
		if(mid%2 ==0)
		{
			if (arr[mid]== arr[mid+1] )
			{
				start=mid+2;
			}
			else
			{
				//ya tho mai right part par khada hu
				// ya phir mein answer ke upar khada hu
				//is liya e =mid kar raha hu 
				// same cheez pivot index find kana ka liya kiya tha
				end=mid;
			}
		}
		
		//update mid
		mid=(start+end)/2;
	}
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
	
	int arrayIndex=oddOccurance(arr,n);
	
	cout<<"The Odd occurance element is: "<<arr[arrayIndex]<<" at index: "<< arrayIndex<<endl;
}
