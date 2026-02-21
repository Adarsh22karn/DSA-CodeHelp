#include<iostream>
#include<string.h>
using namespace std;


//cheack Palindrome
bool Palindrome(char ch[], int size)
{
	int left=0,right=size-1;
	while(left<=right)
	{
		if(ch[left] == ch[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
	}
	// agar yaha pauch gay hai to iska matlab sara character 
	//match kar gaya hai
	return true;
	
}



int main()
{
	
	char ch[100];
	cin.getline(ch,100);
	
	int len=strlen(ch);
	bool isPlaindrome= Palindrome(ch,len);
	
	if(isPlaindrome)
	{
		cout<<ch<<" is a palindrome String"<<endl;
	}
	else
	{
		cout<<ch<<" is not a palindrome String"<<endl;
	}
}
