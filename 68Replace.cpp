#include<iostream>
#include<string.h>
using namespace std;


//Replace @ with Space

void Replace(char ch[], int n)
{
	int index=0;
	while(ch[index]!=0)
	{
		if(ch[index]=='@')
		{
			ch[index]=' ';
		}
		index++;
	}
}


int main()
{
	
	char ch[100];
	cin.getline(ch,100);
	
	cout<<"Befour Replacing: "<<ch<<endl;
	
	Replace(ch,100);
	cout<<"After Replacing: "<<ch<<endl;
	
}
