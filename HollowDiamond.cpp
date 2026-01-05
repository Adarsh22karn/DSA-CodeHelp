#include<iostream>
using namespace std;

//Hollow Diamond
//_ _ _ *
//_ _ * _ *
//_ * _ _ _ *
//* _ _ _ _ _ *
//* _ _ _ _ _ *
//_ * _ _ _ *
//_ _ * _ *
//_ _ _ *


int main()
{
	int n;
	cin>>n;
	
	for(int row=0; row<n;row++)
	{
		//for space
		for(int space=0;space<n-row-1; space++)
		{
			cout<<" ";
			
		}
		  
			//for star
			for(int star=0;star<row+1; star++)
			{
				//for only print star in first colums and last column
				if(star==0 || star==row+1-1)
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
