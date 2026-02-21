#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//creation 
	string name;
	
	//input
//	cin>>name;
	getline(cin,name);
	
	//print
	cout<<"Printing Name: "<<name<<endl;
	
	cout<<"Printing First Character: "<<name[0]<<endl;
	
	int index=0;
	while(name[index] !='\0')
	{
		cout<<"Index "<<index<<" character "<<name[index]<<endl;
		index++;
	}
	
	
	int value=(int)name[6];
	cout<<value;
}
