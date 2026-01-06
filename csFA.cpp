#include<iostream>
#include<cmath>
using namespace std;


void faran(double cs)
{	
	cout<<"Celsius to Fahrenheit: ";
	cout<<(cs*1.8)+32;
}

int main()
{
	double cs;
	cin>>cs;
	
	faran(cs);
}
