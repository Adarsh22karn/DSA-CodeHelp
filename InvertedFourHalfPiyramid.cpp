#include<iostream>
using namespace std;


//* * * * _ * * * *
//* * * _ _ _ * * *
//* * _ _ _ _ _ * *
//* _ _ _ _ _ _ _ *
//* _ _ _ _ _ _ _ *
//* * _ _ _ _ _ * *
//* * * _ _ _ * * *
//* * * * _ * * * *
//
//1 inverted Half piyramid formula = n-row
//2 half piyramid formula = r0=1space
//						  r1=3space
//						  r2=5space=2*r+1
//3 stepinverted half piyramid r0=4star
//							 r1=3star
//							 r2=2star=n-row
//	
//4 step copy all three steps and change formula
//	n-row=row+1
//	for space 2*num-2*row-1







int main()
{
	int num;
	cin>>num;
	
	
	//codefor inverted half piyramid
	for(int row=0;row<num;row++)
	{
		//for star
		for(int col=0;col<num-row;col++)
		{
			cout<<"*";
		}
		
		//for space
			for(int col=0;col<2*row+1; col++)
			{
				cout<<" ";
			}
			
		//for star
		for(int col=0;col<num-row; col++)
			{
				cout<<"*";
			}
		
		
		
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	for(int row=0;row<num;row++)
	{
		//for star
		for(int col=0;col<row+1;col++)
		{
			cout<<"*";
		}
		
		//for space
			for(int col=0;col<2*num-2*row-1; col++)
			{
				cout<<" ";
			}
			
		//for star
		for(int col=0;col<row+1; col++)
			{
				cout<<"*";
			}
		
		
		
		cout<<endl;
	}
	
}
	












//int main()
//{
//	int num;
//	cin>>num;
//	
//	
//	//codefor inverted half piyramid
//	for(int row=0;row<num;row++)
//	{
//		for(int col=0;col<=num-row;col++)
//		{
//			cout<<"* ";
//		}
//		
//		//for space
//			for(int col=0;col<2*row+1; col++)
//			{
//				cout<<"  ";
//			}
//			
//		//for star
//		for(int col=0;col<num-row+1; col++)
//			{
//				cout<<"* ";
//			}
//		
//		
//		
//		cout<<endl;
//	}
//	
//	
//	
//	
//	
//	
//	//code for half prowyramrowd
//	for (int row=0;row<num;row++)
//	
//	{
//		
//		for(int col=0;col<=row+1 ;col++)
//		{
//			cout<<"* ";
//		}
//		
//		
//		for(int col=0;col<2*num-2*row-1;col++)
//		{
//			cout<<"  ";
//		}
//		
//		
//		
//		//for star
//		for(int col=0;col<row+2; col++)
//			{
//				cout<<"* ";
//			}
//		
//		cout<<endl;
//	}
//	
//	
//}

