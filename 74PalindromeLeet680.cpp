#include<iostream>
#include<string.h>
using namespace std;


//valid palindrome || Leet code 680
//aba is palindrome
//abca could delete c - aba is palindrome



bool check(string s, int left, int right)
{
	while(left<=right)
	{
		if(s[left] == s[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
	}
	return true;
}








bool validPalindrome(string s)
{
	int len= s.length();
	int left=0;
	int right=len-1;
	
	while(left<=right)
	{
		//agar phala se palindrom tha
		if(s[left] == s[right])
		{
			left++;
			right--;
		}
		else
		{
			//left!= right
			// 1 removel is allowed
			// cheack palindrome after 1 removal
			
			//left ka ith caracter remove karunga 
			bool ans1= check(s, left+1, right );
			
			//right ka ith caracter remove karunga 
			bool ans2= check(s, left, right-1);
				
			//we will use OR oprator 
			//which will cheak either any one is palindrome 
			return ans1||ans2;
		}
	}
	// agar yaha tak paucha ho 
	//valid palindrom hai
	//with 0 removal
	return true;
		
	
}


int main()
{
	//creation 
	string s;
	
	//input
	cin>>s;
	
	bool answer=validPalindrome(s);
	
	if (answer)
	{
		cout<<s<<" is a palindrome ";
	}
	else
	{
		cout<<s <<" is not a palindrome";
	}
}
