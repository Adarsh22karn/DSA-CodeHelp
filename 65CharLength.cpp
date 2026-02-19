#include<iostream>
#include<string.h>
using namespace std;

//length of string
//1 approch use strlen function
//2 approch use loop


int length(char ch[], int size)
{
	int i=0;
	while(ch[i] !='\0')
	{
		i++;
	}
	return i;	
}




//int length(char ch[] ,int size)
//{
//	int len=0;
//	for(int i=0;i<size;i++)
//	{
//		if (ch[i]=='\0')
//		{
//			break;
//		}
//		else
//		{
//			len++;
//		}
//	}
//	return len;
//}



int main()
{
	char ch[50];
	cin.getline(ch,50);
	
//	cout<<"Length of character Array: "<<strlen(ch)<<endl;
	
	int findLength=length(ch,50);
	cout<<"Length of character Array: "<<findLength;
	
}
