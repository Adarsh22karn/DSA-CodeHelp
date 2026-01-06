#include<iostream>
using namespace std;

void areaCircle(double r)
{
	cout<<"Area of circle :"<<3.14*r*r<<endl;
}

int main()
{
	double r;
	cin>>r;
	
	areaCircle(r);
}
