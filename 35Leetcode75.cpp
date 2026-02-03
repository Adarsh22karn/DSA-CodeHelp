#include<iostream>
#include<limits>
using namespace std;


//sort colors;

//two pointer approch
void sort(int arr[],int n)
{
	int index=0,left=0,right=n-1;
	while (index<= right)
	{
		if (arr[index]==0)
		{
			swap(arr[index],arr[left]);
			left++;
			index++;
		}
		else if (arr[index]==2)
		{
			//in this condition we will come from right to left 
			//index should not be incremented in this case
			
			swap(arr[index],arr[right]);
			right--;
		}
		else
		{
			index++;
		}
	}
	
	
	
//		print array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}





//counting
//void sort(int arr[],int n)
//{
//	int zero=0,one=0,two=0;
//	
//	for (int i=0;i<n;i++)
//	{
//		if(arr[i]==0)
//		{
//			zero++;
//		}
//		else if( arr[i]==1)
//		{
//			one++;
//		}
//		else
//		{
//			two++;
//		}
//	}
//	
//	
//	for (int i=0;i<zero;i++)
//	{
//		cout<<"0 ";
//	}
//	for (int i=0;i<one;i++)
//	{
//		cout<<"1 ";
//	}
//	for (int i=0;i<two;i++)
//	{
//		cout<<"2 ";
//	}
//	
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
	
	sort(arr,n);
	
	
	

}

