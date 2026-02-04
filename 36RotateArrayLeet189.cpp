#include<iostream>
using namespace std;


//modulas ka use
//(index+k)%n
void left(int arr[],int n)
{
	int k;cin>>k;
	int ans[n];
	
	for(int index=0;index<n;index++)
	{
		int res=(index+k)%n;
		ans[res]=arr[index];	
	}
	 
	arr=ans;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	

 } 
 
 
 
//create a temporar array of size k 
//void left(int arr[],int n)
//{
//	int k;cin>>k;
//	int rem=n-k;
//	
//	for(int i=rem;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	
//	for(int i=0;i<rem;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}





int main()
{
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;
	
	int arr[n];
	

	
	for (int i=0;i<n;i++)
	{
		cout<<"Enter the valve at index "<<i<<" :";
		cin>>arr[i];
		cout<<endl;
	}
	
	left(arr,n);
	
	
}


