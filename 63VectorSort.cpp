#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//create a vector of vector and sort by seconnd element
//eg [1 44] [0 55] [0 22] [0 11] [2 33] 
//[0 11] [0 22] [2 33] [1 44] [0 55]

//function to print array
void print(vector<vector<int>> &arr ,int n)
{
	
	for (int i=0;i<n; i++)
	{
		vector<int> &temp=arr[i];
		int a=temp[0];
		int b=temp[1];
		cout<<a<<" "<<b<<endl;
	}
}



bool myComparator1stIndex(vector<int>&a, vector<int>&b)
{
	//by default it is zero 
	//to sort through 1 index add indexing to it
	return a[1]< b[1];
}



int main()
{
	vector<vector<int>>  arr;
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;	
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cout<<"Add data to a and b Index: ";
		cin>>a>>b;
		vector<int> temp;
		temp.push_back(a); 
		temp.push_back(b); 
		
		arr.push_back(temp);
	}
	
	// third comperatue is for ki user bataya kaisa sort karn hai 
	// by defauly wo phala se ascending hota hai
	
	
	cout<<"Traversing the Vector of Vector"<<endl;
	print(arr, n);
	
	cout<<"Sorting the vector of Vector by 1st Index: "<<endl;
	sort(arr.begin(), arr.end(), myComparator1stIndex);
	print(arr, n);	
	
	
}
	
	
