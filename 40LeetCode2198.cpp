#include<iostream>
using namespace std;


//-6 -3 -2 5 4 1 -9 8
//5 -6 4 -3 1 -2 8 -9
void shift(int arr[], int n)
{
	int left=0,next=1;
	for(int i=0;i<n;i++)
	{
		if (arr[i]>0)
		{
			if(left%2==1)
			{
				swap(arr[left] , arr[i]);
				left++;	
				i++;
			}
			else
			{
				swap(arr[left] , arr[i]);
				next++;
			}
			
			
		}
	
	
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;
	
	int arr[10];
	

	
	for (int i=0;i<n;i++)
	{
		cout<<"Enter the valve at index "<<i<<" :";
		cin>>arr[i];
		cout<<endl;
	}
	
	shift(arr,n);
	

	

}
