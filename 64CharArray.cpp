#include<iostream>
using namespace std;

int main()
{
//	int n;
//	cout<<"Size Of Array: ";
//	cin>>n;
	
	//input
	char ch[10];
//	cin>>ch;
	
	//delimator of cin in case of caracter array beaks 
	//if we use space or tab
	// to handel this problen 
	//we will use cin.getline
	cin.getline(ch, 10);
	
	//print
	cout<<"Traversing the Charater Array: "<<ch<<endl;
	
	//access any single charater
	cout<<"Accessing the char index : "<< ch[2]<<endl;
	
	char temp=ch[6];
	int value=(int) temp;
	cout<<"Ascii Value at Index: "<< value;
	
	
	
	
//	char ch[100];
//	//input the character Array
//	for( int i=0;i<n;i++)
//	{
//		cout<<"Add data to "<<i<<" Position: ";
//		cin>>ch[i];
//	}
	
//	//traversing the array
//	cout<<"Traversing the Charater Array: ";
//	for(int i=0;i<n;i++)
//	{
//		cout<<ch[i]<<" ";	
//	}
}
