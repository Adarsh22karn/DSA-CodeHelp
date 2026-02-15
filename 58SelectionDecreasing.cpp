#include<iostream>
#include<vector>
using namespace std;




void SelectionSort(vector<int> &arr ,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;//i th element hi smallest hai
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] > arr[minIndex])
			{
				minIndex=j;//minIndex ka value update karna hai
			}
		}
		
		
		//swap ith and min Index elements
		swap(arr[i],arr[minIndex]);
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
	
	SelectionSort(arr, n);
	print(arr, n);
	
}
