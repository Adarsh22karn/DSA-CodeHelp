#include<iostream>
#include<vector>
using namespace std;

//find last occrence of a number in a sorted array



int lastsearch(vector<int> arr, int n, int target)
{
	int start=0,end=n-1;
	int mid=(start+end)/2;
	//ans ka value -1 rakh liya taki agar found nahi hua to if 
	//condition lagana assan ho jayaga 
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid] == target)
		{
			//agart target element mil jata hai to 
			//return nahi karna usko ans me store karna 
			//aur uska bad uska righy side me ja jakar 
			//ik baar aur check karna ki kahi last occurance 
			//phale to nahi aa gaya
			ans=mid;
			start=mid+1;
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
	// value of ans ka store idhar hoga
	return ans;
	
	
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
	
	int ansIndex=lastsearch (arr,n,target);
	
	if (ansIndex== -1)
	{
		cout<< target<<" element not found"<<endl;
	}
	else
	{
		cout<<target <<" element found at "<< ansIndex<<" Index";
	}
}

