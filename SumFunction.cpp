#include<iostream>
using namespace std;

//whenever the function sees return statement it instantly quita
//but in cout codition whole block of code will run

//void sum(int a,int b,int c)
//{
//	int res=a+b+c;
//	cout<<"Sum: "<<res<<endl;
//	
//}
//
//int main()
//{
//	int a,b,c;
//	cin>>a>>b>>c;
//	
//	sum(a,b,c);
//}





int sum(int a,int b,int c)
{
	int res=a+b+c;
	return res;
	
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
//	int final =sum(a,b,c);
	cout<<"Sum: "<<sum(a,b,c) <<endl;
}
