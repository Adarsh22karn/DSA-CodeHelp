#include<iostream>
#include<string.h>
using namespace std;

//remomove all occurance of a substring LeetCode 1910
//str-abbcbaddcbabbddaa
//part-cba
//output-abbddbbddaa (all cba are removed)

string OccuranceSubString(string s, string part)
{
	while (s.find(part) != string::npos)
	//if we are in inside loop means the part string is available in orginal string
	{
		s.erase(s.find(part),  part.length());
	}
	return s;
}

int main()
{
	//creation 
	string s,part;
	
	//input
	cin>>s;
	cin>>part;
	
	cout<<OccuranceSubString(s,part);
}
