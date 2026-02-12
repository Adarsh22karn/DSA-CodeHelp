#include<iostream>
#include<vector>
using namespace std;


//input 2 numbers -> divide -> binary search
//i/p=29/7=4
//use approch which we used in sqrt function 
//search space will be 0 to 29
//mid will be 14

//now quotient*divisor+remainder=dividand
//quotient*divisor<= dividand

//quotient is 14
//divisor is 7

//14*7=98





int divide(int dividand, int divisor)
{
	int start=0;
	int end=dividand;
	int mid= (start+end)/2;
	int ans;
	 
	while(start<=end)
	{
		if(mid*divisor == dividand)
		{
			return mid;
		}
		else if(mid*divisor <= dividand)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{	
			end=mid-1;
		}
		
		//mid
		mid= (start+end)/2;
	}
	
	return ans;
}



int main()
{
	int dividand, divisor;
	cout<<"Dividand Number: ";
	cin>>dividand;
	
	cout<<"Divisor Number: ";
	cin>> divisor;



//	we will pass abs function to function call so rthat the 
//   negative no is converted into positive no
//	after coming out iof the function we will cheak weather the 
//	divisor or dividand is less than 0 than we 
//	use if else condition and add minus sign to it 
//	or 
//	you can also use answer= 0- answer;
//	to convert positive into negative 
	
	
	int answer=divide(abs(dividand) , abs(divisor) );
	
	if( (dividand>0 && divisor<0) || (dividand<0 && divisor>0) )
	{
		answer=0-answer;
	}
	
	cout<<"The Quocient will be: "<<answer<<endl;
	
	
//	{
//		cout<<"The Quocient will be: "<<answer<<endl;
//	}
//	else
//	{
//		cout<<"The Quocient will be: -"<<answer<<endl;
//	}
	
	
}

