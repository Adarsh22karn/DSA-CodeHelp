#include<iostream>
using namespace std;





//find missing no eg 1325076 missing no will be 4
//1 approch me for () numer ko traverse kar usme linear search me find karo 
//			2 loop lag jayga to comO(n2)
//
//2 approch hai sort kar traverse karo aur sabka beech ka difference 1 ho to continue kar 
//nahi to return karo 
//
//3 approch hai sum jaisa 1325076 ka sum 32 ayaga
//aur 13250764 ka sum 36 ayaga difference nikal ke return kar sakta hai
void missing(int arr[],int n)
{
	int Tsum=0, Asum=0;
	for(int i=0;i<=n;i++)
	{
		Tsum=Tsum+i;
	}
//or use this method
//	to find sum from 1 to n use formula ((n)*(n+1))/2;
//	Tsum=((n)*(n+1))/2;
	
	
	
	for(int i=0;i<n;i++)
	{
		Asum=Asum+arr[i];
	}
	
	int result=Tsum-Asum; 
	
	cout<<"The missing no fro the Array are : "<<result;
	
	
	
}


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
	
	missing(arr,n);	
}


