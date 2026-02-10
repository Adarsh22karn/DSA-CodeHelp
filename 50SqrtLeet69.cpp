#include<iostream>
#include<vector>
using namespace std;




int mySqrt(int n)
{
	int start=0;
	int end=n;
	long long int mid=(start+end)/2;
	int ans=-1;
	
	while(start<=end)
	{
		//cheak koro kya mid hi to answer nahi
		if (mid*mid==n)
		{
			return mid;
		}
		else if (mid*mid < n)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		
		//update mid
		mid=(start+end)/2;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter non negative number to find sqrt:  ";
	cin>>n;
	
	cout<<"Sqrt of the number is: "<<mySqrt(n);
}
