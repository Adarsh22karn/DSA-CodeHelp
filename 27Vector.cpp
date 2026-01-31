#include<iostream>
#include<vector>
using namespace std;



void print(vector<int> arr)
{
	int size= arr.size();
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{
	//vector  initilization
	
	
	vector<int> arr; // default with no data , size=0
//	vector<int> arr(5); //size =5  
//	vector<int> arr(5,101); //size =5 value at each index 101
//	vector<int> arr={1,2,3,4,5};
	
	
	//insert
	arr.push_back(4);
	arr.push_back(8);
	arr.push_back(12);
	arr.push_back(11);
	arr.push_back(4);
	
	cout<<arr.size()<<endl;
	
	print(arr);
	
	
	
	
	
}
