#include<iostream>
#include<string.h>
using namespace std;

//reverse a string
void reverse(char ch[], int size)
{
	int left=0, right=size-1;
	while(left<=right)
	{
		swap(ch[left], ch[right]);
		left++;
		right--;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<ch[i]<<" ";
	}
}



int main()
{
	
	char ch[100];
	cin.getline(ch,100);
	
	cout<<"Length of character Array: "<<strlen(ch)<<endl;
	
	cout<<"Befour Reversing: "<<ch<<endl;
	
	cout<<"After reversing: ";
	int len=strlen(ch);
	reverse(ch,len);
}
