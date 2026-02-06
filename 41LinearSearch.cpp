#include<iostream>
#include<vector>
using namespace std;





//void search(vector<int> arr ,int n, int k)
//{
//	
//	bool flag=0;
//	for(int i=0;i<n;i++)
//	{
//		if (arr[i]==k)
//		{
//			flag=1;
//			break;
//		}
//	}
//	
//	
//	
//	if (flag)
//	{
//		cout<<k<<" element is found"<<endl;
//	}
//	else
//	{
//		cout<<k<<" element not found"<<endl;
//	}
//	
//	
//}







int search(vector<int> arr , int n, int k)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			return true;	
		}	
	}	
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
	
	
	int k;
	cout<<"The elemenet you want to search: ";
	cin>>k;
	
	int found = search (arr,n,k);	
	
	if(found==-1)
	{
		cout<<k<<" element not found"<<endl;
	}
	else
	{
		cout<<k<<" element found"<<endl;
	}
}





//int main()
//{
//	int n;
//	cout<<"Enter the size of Array: ";
//	cin>>n;
//	
//	int arr[10];
//	
//	for (int i=0;i<n;i++)
//	{
//		cout<<"Enter the valve at index "<<i<<" :";
//		cin>>arr[i];
//		cout<<endl;
//	}
//	
//	
//	int k;
//	cout<<"The elemenet you want to search: ";
//	cin>>k;
//	
//	search(arr,n,k);
//}
