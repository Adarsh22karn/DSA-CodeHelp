#include <iostream>
using namespace std;


//cheak prime
//prime no have only two factor 1 and no itself
//if n=10
//loop chalayaga 2 to n-1
//loop me check karanga N%i==0
//if true not a prime no
//if false not a prime no


bool checkPrime(int n)
{
	for (int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int n;
	cout<<"Enter a no to cheack weather it is a prime number or not: ";
	cin>>n;
	
	bool ans = checkPrime(n);
	
	if(ans)
	{
		cout<<n <<" is a Prime Number"<<endl;
	}
	else
	{
		cout<<n<<" is not a prime number";
	}
	

}
