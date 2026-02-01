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
	
	
	//insert- push
	arr.push_back(4);
	arr.push_back(8);
	arr.push_back(12);
	arr.push_back(11);
	arr.push_back(4);
	
	cout<<arr.size()<<endl;
	
	print(arr);
	
	
	//delete - pop
	arr.pop_back();
	print(arr);
	
	
	
	
	
	
	
	
}
