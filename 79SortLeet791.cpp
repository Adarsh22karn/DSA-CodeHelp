#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;


//custom sort string
//leet 791


//global variable
string str;

bool comparator(char ch1, char ch2)
{
	//this will return true if the position of charaacter 1 in str string
	//is less than the position of character2 in str string
	
	return(str.find(ch1)< str.find(ch2));
}



string customSort(string order, string s)
{
	str=order;
	sort(s.begin(), s.end(), comparator);
	return s;	
}



int main()
{
	string order, s;
	getline(cin,order);
	getline(cin,s);
	
	cout<<customSort(order,s);
}
