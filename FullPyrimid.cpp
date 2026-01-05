#include<iostream>
using namespace std;


//for full piyramid we will use formula approach
//_ _ _ _ *
//_ _ _ *   *
//_ _ *   *   *
//_ *   *   *   *
//we will cout all row
//wrte all the given variable
//1) rows=n=5
//2) r0 - 4space 1star
//   r1 - 3space 2star
//   r2 - 2space 3star
//   r3 - 1space 4star
//   r4 - 0space 5star
//   
//to print star formual= row+1
//to print space formula= n-row-1
 
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
				cout<<"* ";
			}
		
	cout<<endl;
	}	
}
