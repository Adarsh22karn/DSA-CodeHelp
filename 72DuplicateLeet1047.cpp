#include<iostream>
#include<string.h>
using namespace std;


//1047 leet code
//remove all adjacent duplicates in string
//abbaca-aaca-ca

string removeDuplicate(string s)
{
	 string ans= "";
	 //ans name ka naya string banana hai 
	 //uska rightmost element check karta jana hai
	 //agar same aa gaya to pop karna hai 
	 //nahi to phir push karna hai
	 
	 int index=0;
	 while(index<s.length())
	 {
	 	//same
	 	//ans ka rightmost chacter aur string s ka current character
	 	
	 	if(ans[ans.length()-1]==s[index])
	 	{
	 		//pop
	 		ans.pop_back();
		 }
		 else
		 {
		 	ans.push_back(s[index]);
		 }
		 index++;
	 }
	 
	 return ans;
}



int main()
{
	//creation 
	string s;
	
	//input
	cin>>s;
	
	cout<<removeDuplicate(s);
}

