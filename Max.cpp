#include<iostream>
using namespace std;

//we can use max function also 
//max only take 2 arguments 
//max((a,b),c) 

int max(int a, int b, int c)
{
	if (a>=b && a>=c)
		return a;
	else if (b>=a && b>=c)
		return b;
	else
		return c;
}


int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"Maximum No: "<<max(a,b,c)<<endl;
}
