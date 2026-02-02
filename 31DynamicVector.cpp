#include<iostream>
#include<vector>
using namespace std;



void print(vector<int> arr)
{
	cout<<"Print Array: ";
	int size= arr.size();
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
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
	print(arr);
	

	
	for(int i=0;i<10 ;++i)
	{
		arr.push_back(80);
	}
	print(arr);
}
