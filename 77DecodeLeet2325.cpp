#include<iostream>
#include<string.h>
using namespace std;


//decode the message 
//leetCode 2325

//approch is first remove all the duplicates from key
//map all the key charcter from a to z
//this table will be named substitution table
//
//now in message take each charater in message and print corresponding
//value which was optained from substitution table.

string decodeMessage(string key, string message)
{
	 //create mapping
	 char start='a';
	 //create a array of 256 size to store all char
	 //and assign with null'\0' that is zero
	 char mapping[256]={0};
	 
	 //we will use for each loop
//	 which is same as 
//	 for(int i=0;i<key.length();i++){
//	 	char ch=key[i];
//	 }
//it will traverse each of key char
//auto keyword is used to automatically detect the variable type
	 for (auto ch: key)
	 {
	 	//condition is if ther is space do nothing
	 	//we have assigned mapping with 0 so that same char will not be maaped twice
	 	if(ch != ' ' && mapping[ch]==0 )
	 	{
	 		mapping[ch]=start;
	 		start++;
	 	}
	 	
	 }
	 
	 
	 
	 
	 //use mapping
	 string ans;
	 for(int i=0;i<message.length();i++)
	 {
	 	char ch=message[i];
	 	
	 	if(ch==' ')
	 	{
	 		ans.push_back(' ');
		}
		else
		{
			
	 	
	 	// store the mapped char in decoded character
	 	char decodedChar=mapping[ch];
	 	//now push back decode haracter in ans 
	 	ans.push_back(decodedChar);
	 	}
	 }
	 
	return ans;
}

int main()
{
	string key, message;
	getline(cin,key);
	getline(cin,message);
	
	cout<<decodeMessage(key, message);
}
