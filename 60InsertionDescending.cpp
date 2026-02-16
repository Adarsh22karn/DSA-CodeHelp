#include<iostream>
#include<vector>
using namespace std;




void InsertionSort(vector<int> &arr ,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int key=arr[i];
		int j=i-1;
		//move element of arr[0....i-1]
		//that are greater than key to one position 
		//ahead of theier current position
		while(j>=0 && arr[j]< key)
		{
			arr[j+1]= arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
}
		

 
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
	
	InsertionSort(arr, n);
	print(arr, n);
	
}
