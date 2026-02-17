#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



//function to print array
void print(vector<int> &arr ,int n)
{
	cout<<"Array after Sorting: ";
	for (int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
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
	
	
	sort(arr.begin() , arr.end());
	
	print(arr, n);
	
}
	
	
