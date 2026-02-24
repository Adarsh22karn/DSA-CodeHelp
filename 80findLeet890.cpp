#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;



//leetcode 890
//find and replace pattern'

//create mapping
//tis function normalises all the words and pattern into similar format
//so that we can comapre them and find the solution

void mapping(string& str)
{
	char start='a';
	char map[300]={0};
	
	for (auto ch: str)
	{
		if(map[ch]==0)
		{
			map[ch]=start;
			start++;
		}
	}
	
	//update the string
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		str[i]=map[ch];
	}
}



vector<string> findAndReplace (vector<string> words, string pattern)
{
	vector<string> ans;
	//firstly normalize the pattern
	mapping(pattern);
	
	//saara words ke sath khelnhai
	for(string s:words)
	{
		string temp=s;
		
		//normalize temp
		mapping(temp);
		
		if(temp==pattern)
		{
			//it means that s wali string was a valid answer
			//ek vector ban lo ans name ka store karna ka liy
			ans.push_back(s);
		}
	}
	return ans;
}




int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);
    
    for (int i = 0; i < n; i++) 
	{
        cin >> words[i];
    }
    
    string pattern;
    cin>>pattern;
    
    vector<string> res = findAndReplace(words, pattern);  // ?
    
	for (const string &w : res)   
	{
	    
        cout << w << ' ';  
	}                               
    cout << endl; 
}

    
