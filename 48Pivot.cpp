#include<iostream>
#include<vector>
using namespace std;

//find pivot element in an array 
//array should be rotated and sorted 
//10 12 178 20 24 28 30 44
//24 28 30 44 10 12 18 20 it should be array 
//pivot means smallest or largest any thing
//it is not as same as mountain array because in that question graph is peak
//but in this case there is no mountaion in graph
//
//1 approch linear search O(n)
//2 approch sort the array in ascending order and stor the array in temp 
//	and print last element O(nLog n)
//3 appoch is binary search 
//	we will create 4 case 
//	A-24 28 30 44 increasing way
//	B-10 12 18 20 increasing case
//	C-44 Both in middel 
//	D-10 Both in middel
//	44 should be answer

int pivot(vector<int> arr, int n)
{
	int start=0, end=n-1;
	int mid=(start+end)/2;
	
	while(start<=end)
	{
		//corner case
		// if array size is 1
		if(start==end)
		{
			return start;	
		} 
		
		// case for C and D
		 if(arr[mid]>arr[mid+1])
		 {
		 	return mid;
		 }
		 else if(arr[mid]< arr[mid-1])
		 {
		 	return mid-1;
		 }
		 
		 //A case
		 else if(arr[start]>arr[mid])
		 {
		 	end=mid-1;
		 }
		 
		 //B case
		 else
		 {
		 	start=mid+1;
		 }	
		 
		 //update mid
		  mid=(start+end)/2;
	}
	
	//kuch nahi mila
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
	
	cout<<"The pivot element in the array is : "<<arr[pivot(arr,n)];	
	
	
}
