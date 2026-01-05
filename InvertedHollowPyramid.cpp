#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int row=0; row<n; row++)
	{
		//for space
		for(int space=0;space<row;space++)
		{
			cout<<" ";
		}
		
		//for star
		for(int star=0;star<n-row;star++)
		{
			
			if(star==0 || star==n-row-1)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
			
		}
		
		cout<<endl;
	}
	
}
