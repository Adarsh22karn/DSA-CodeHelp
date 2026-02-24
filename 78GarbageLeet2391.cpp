#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

//minimum amount of time to collect garbage
// leetCode 2391

int garbageCollection( vector<string>& garbage, vector<int>& travel)
{
	int pickP=0;
	int pickG=0;
	int pickM=0;
	
	int travelP=0;
	int travelG=0;
	int travelM=0;
	
	//jaha kak mujha last p milga uhwa tak travel karanga
	int lastP=0;
	int lastM=0;
	int lastG=0;
	
	//calculate Pick and time travel
	//to traversr string
	for(int i=0;i<garbage.size(); i++)
	{
		string curr=garbage[i];
		
		//to traverse character
		for(int j=0;j<curr.length();j++)
		{
			char ch=curr[j];
			
			if(ch=='P')
			{
				pickP++;
				lastP=i;	
			}
			else if(ch=='G')
			{
				pickG++;
				lastG=i;
			}
			else if(ch=='M')
			{
				pickM++;
				lastM=i;
			}
			
		}
	}
	
	
	
	//calculate travel time
	for(int i=0;i<lastP;i++)
	{
		travelP= travelP+travel[i];
	}
	for(int i=0;i<lastM;i++)
	{
		travelM= travelM+travel[i];
	}
	for(int i=0;i<lastG;i++)
	{
		travelG= travelG+travel[i];
	}
	
	
	return pickP+travelP+pickG+travelG+pickM+travelM;
}







int main() {
    int n;
    cout << "Enter number of houses: ";
    cin >> n;

    vector<string> garbage(n);
    cout << "Enter garbage at each house (e.g., G, P, M, GP):\n";
    for (int i = 0; i < n; i++) {
        cin >> garbage[i];
    }

    vector<int> travel(n - 1);
    cout << "Enter travel times between houses (n-1 values):\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> travel[i];
    }

    int result = garbageCollection(garbage, travel);
    cout << "Minimum time to collect garbage: " << result << " minutes" << endl;

    return 0;
}

	
