#include<iostream>
using namespace std;
//i is for row j is for column
int main()
{
	
	for (int i=0;i<5;i++)
	{ 
		for(int j=0;j<5;j++)
		{
			if(i==0||i ==4)
			{
				cout<<"* ";
			}
			else
			{
				if(j==0||j==4)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}
}
