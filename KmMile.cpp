#include<iostream>
#include<cmath>
using namespace std;


void miles(double km)
{	
	cout<<"Kilometer converted into miles: ";
	cout<<km/1.609;
}

int main()
{
	double km;
	cin>>km;
	
	miles(km);
}
