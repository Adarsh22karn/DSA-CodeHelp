//Diamond

#include<iostream>
using namespace std;

//_ _ _ _ *
//_ _ _  *  *
//_ _  *  *  *
//_  *  *   *  *
// *  *   *   *  *
// *  *   *   *  *
//_  *  *   *  *
//_  _  *  *  *
//_  _  _ *  *
//_  _  _  _*
//
//We can see that i is two pattern just merge them full + inverted pyramid


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


