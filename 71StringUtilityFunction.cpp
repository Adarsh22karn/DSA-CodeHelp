#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//creation 
	string name;
	
	//input
	getline(cin,name);
	
	//print
	cout<<"The Name is: "<<name<<endl;
	
	//length 
	cout<<"Length Of String: "<<name.length()<<endl;
	
	//is my string Empty or not ||for True 1 ||for false 0
	string temp="";
	cout<<"String is empty or not: "<<temp.empty()<<endl;
	
	//to find at particular position
	cout<<"Character at 2 position: "<<name.at(2)<<endl;
	
	//to find first Chacter of String
	cout<<"The First Character of String: "<<name.front()<<endl;
	
	//to find back Chracter of String 
	cout<<"The Last Character of String: "<<name.back()<<endl;
	
	//to concatnate two string 
	//string str1="ADARSH";
	string str2=" KARN";
	cout<<"Concatnating Two string: "<<name.append(str2)<<endl;
	
	//to erase some data from String
	//it accepts two arguments
	//first from which index you want to erase
	//second how many you want to erase  
	cout<<"Erase Character from Second o 2: "<<name.erase(2,2)<<endl;
	
	
	//insert somthing beetween string
	string middle=" Roy ";
	cout<<"Inserting String: "<<name.insert(5, middle)<<endl;
	
	//use Push back  function to add somethinf at last
	name.push_back('A');
	cout << "Push Back A in String: " << name << endl;
	
	//use Pop back  function to delete somethinf at last
	name.pop_back();
	cout << "Pop Back A in String: " << name << endl;
	
	
	//find function 
	string str11="ADARSH KARN is a Good Boy";
	string str22="Good";
	if (str11.find(str22)== string::npos)
	{
		cout<<"Not Found"<<endl;
	}
	else
	{
		cout<<"Found"<<endl;
	}
	
	
	//compare between two string
	//output 0 	-> Both String is Equal
	//outpur <0 -> Both String are not Equal
	string str33="KARN";
	string str44="KARN";
	if(str33.compare(str44)==0)
	{
		cout<<"Matching"<<endl;
	}
	else
	{
		cout<<"not Matching"<<endl;
	}
	
	
	
	//substring
	//a complete string you wandt to take out particular string
//	it also take 2 argument
//	first argument is kis index se char uthana chata ho
//	second argume hai ki kaha tak uthana chata ho
// 7 index se 4 length ka word chaiya 
	string str55="ADARSH KARN is a Good Boy";
	cout<<str55.substr(7,4);
	
	

	
	
	
	
}
