#include<iostream>
using namespace std;

void EvenOdd(int n)
{
	if(n%2==0)
		cout<<"Even";
	else
		cout<<"Odd";
	
}


int main()
{
	int n;
	cin>>n;
	
	EvenOdd(n);
}
