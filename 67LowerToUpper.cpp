#include<iostream>
#include<string.h>
using namespace std;


//convert to upercase
//to convert = lowercase-97+65
void convert(char ch[], int n)
{
	int index=0;
	while(ch[index]!= '\0')
	{
		char currentChar=ch[index];
		// cheack chater is in lowercase and convert it 
		if(currentChar>='a' && currentChar<='z')
		{
			ch[index]=currentChar-'a'+'A';
		}		
		index++;
	}
}





int main()
{
	
	char ch[100];
	cin.getline(ch,100);
	
	cout<<"Befour Converting: "<<ch<<endl;
	
	convert(ch,100);
	cout<<"After Converting: "<<ch<<endl;
	
}
