#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr;
	
	while(1)
	{
		int d;
		cin>>d;
		
		arr.push_back(d);
		cout<<"Capacity: "<<arr.capacity()<<" Size of: "<<arr.size()<<endl;
	}
}
