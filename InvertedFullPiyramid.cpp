#include<iostream>
using namespace std;

//*  *  *  *
//_ *  *  *
//_ _ *  *
//_ _ _ *
//
//for inverted full piyramid we will use formula approach
//1) no of rows= n= 4
//2) r0= 0space 4star
//   r1= 1space 3star
//   r2= 2space 2star
//   r3= 3space 1star
   
   //to find space=row
   //to find star= n+row
   
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
			cout<<"* ";
		}
		
		cout<<endl;
	}
	
}
   

