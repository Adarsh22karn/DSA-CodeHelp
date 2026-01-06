#include<iostream>
#include<cmath>
using namespace std;

//find prime no beetween 1 to n

//int main()
//{
//	int n;
//	cin>>n;
//	
//	
//	for (int i=2;i<sqrt(n);i++)
//	{
//		if(n%i!=0)
//		{
//			cout<<i<<endl;
//		}
//		
//	}
//}






bool isPrime(int num) 
{
    if (num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); ++i) 
	{
        if (num % i == 0)
            return false; // found a divisor, not prime
    }
    return true; // no divisors found, it's prime
}

int main() 
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: ";
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}

