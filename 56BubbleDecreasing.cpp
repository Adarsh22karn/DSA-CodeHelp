#include<iostream>
#include<vector>
using namespace std;




void bubbleSort(vector<int> &arr , int n)
{
	for(int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1; j++)
		{
			if (arr[j]< arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
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
	
	bubbleSort(arr, n);
	print(arr, n);
	
}

