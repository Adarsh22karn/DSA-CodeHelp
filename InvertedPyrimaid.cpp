#include<iostream>
using namespace std;

//int main()
//{
//	
//	for (int row=4;row>= 0;row--)
//	
//	{	
//		for(int col=0;col<=row;col++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//}


//formula n-row
int main()
{
	int num;
	cin>>num;
	
	for(int row=0;row<num;row++)
	{
		for(int col=0;col<num-row;col++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

