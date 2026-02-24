#include<iostream>
#include<string.h>
#include<vector>
using namespace std;


//palindromid substrings


int extend(string s, int left, int right)
{
	int count=0;
	
	while(left >=0 && right<s.length() && s[left]==s[right])
	{
		count++;
		left--;
		right++;
	}
	return count;
}


int CountSubStrings(string s)
{
	int totalCount=0;
	for(int current=0; current<s.length(); current++)
	{
		int oddAns=extend(s, current, current);
		int evenAns=extend(s, current, current+1);
		totalCount=totalCount+oddAns+evenAns ;
	}
	return totalCount;
}




















//int expand(string s, int left, int right)
//{
//	int count=0;
//	
//	while(left >=0 && right<s.length() && s[left]==s[right])
//	{
//		count++;
//		left--;
//		right++;
//	}
//	return count;
//}
//
//
//
//
//
//int CountSubStrings(string s)
//{
//	int totalCount=0;
//	
//	for(int center=0;center<s.length(); center++)
//	{
//		//ODD CASE
//		int oddans=expand(s,center, center);
//		
//		//EVEN CASE
//		int evenans=expand(s,center, center+1);
//		
//		totalCount=totalCount+oddans+evenans;
//	}
//	return totalCount;	
//}





int main()
{
	string s;

	cin>>s;
	
	cout<<CountSubStrings(s);	
}
