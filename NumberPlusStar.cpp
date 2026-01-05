#include<iostream>
using namespace std;

//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int row=0;row<n;row++)
//	{
//		for(int col=0;col<2*row+1;col++)
//		{ 
//			if (col%2!=0)
//			{
//				cout<<"*";
//			}
//			else
//			{
//				cout<<row+1;
//			}
//			
//		}
//		cout<<endl;
//	}
//}







int main()
{
	int n;
	cin>>n;
	
	for(int row=0;row<n;row++)
	{
		int total=row+1;
		for(int col=0;col<total;col++)
		{
			if(col==total-1)
			{
				cout<<row+1;	
			}
			else
			{
				cout<<row+1<<"*";
			}
		}
		cout<<endl;
	}
}
