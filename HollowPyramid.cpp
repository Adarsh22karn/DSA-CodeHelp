#include<iostream>
using namespace std;

//Hollow piyramid
//_ _ _ *
//_ _ * _ *
//_ * _ _ _ *
//* _ _ _ _ _ *
//
//int row=n=4
//r0= 3space 1star
//r1= 2space 1star 1space 1star
//r2= 1space 1star 3space 1star
//r3= 	   1star 5space 1star

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
}
