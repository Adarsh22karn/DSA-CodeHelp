#include<iostream>
#include<vector>
using namespace std;




int search(vector<int> arr, int n, int target)
{
	int start=0,end=n-1;
	int mid=(start+end)/2;//int owerflow hona ka chance hai
	while(start<=end)
	{
		if(arr[mid] == target)
		{
			return mid;
		}
		//index ko right side le jana hai
		else if(target>arr[mid])
		{
			start=mid+1;
		}
		//index ko left side le jana hai
		else if (target < arr[mid])
		{
			end=mid-1;
		}
		
		// start and end ka valie updtae ho gaya 
		//ab mid ka value dobara update kar do;
		mid=(start+ end )/2;
	}
	
	//agar element found nahi hua tho
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
	cout<<"The elemenet you want to search: ";
	cin>>target;
	
	int ansIndex=search (arr,n,target);	
	
	if (ansIndex== -1)
	{
		cout<< target<<" element not found"<<endl;
	}
	else
	{
		cout<<target <<" element found at "<< ansIndex<<" Index";
	}
}

