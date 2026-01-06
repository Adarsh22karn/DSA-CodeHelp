#include<iostream>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i ==0)
		//remainder=0 perfectly divisible 
		//not a prime no
		{
			return false;
		}	
	}
	//[2,3,4,5......n-1] koi bhi n ko perfectly divide nahi kar paya  hoga
	//it means N is a prime no
	return true;
	
}


int main()
{
	int a;
	cin >>a;
	
	bool prime=isPrime(a);
	
	if(prime)
	{
		cout<<a<<" is a prime no";
	}
	else
	{
		cout<<a<<" is not a prime no";
	}
}
