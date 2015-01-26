/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Purpose: Converts 24-Hour notation to 12-Hour notation.
 * Created on January 25, 2015, 11:19 PM
 */

//System Libraries
#include <iostream>
using namespace std;


void input_24(int hours, int minutes);
void convert_24_to_12(int hours, int AMPM);
void output_12(int hours, int minutes, int AMPM);

int main ()
{
	int hours;
	int minutes;
	int AMPM;
	char A, P;
        char answer;
        do{
	void input_24(int hours, int minutes);
	{
	cout << "Enter the number hours"<<endl;
	cin >> hours;
	cout << "Enter the number minutes"<<endl;
	cin >> minutes;
	}
	
	void convert_24_to_12(int hours, int AMPM);
	{

	if( hours < 12)
	{
		hours = hours;
		minutes = minutes;
		AMPM = 'A';

	}

	if( hours > 12)
	{
		hours = hours - 12;
		minutes = minutes;
		AMPM = 'P';

	}

	}

	void output_12(int hours, int minutes, int AMPM);
	{

	if(AMPM == 'P')
	{
		cout << "The time in 12 hour notation is " << hours << ":" << minutes << " PM"<< endl;
	}
	if(AMPM == 'A')
	{
		cout << "The time in 12 hour notation is " << hours << ":" << minutes << " AM"<< endl;
	}

	}
        cout<<"Would you like to repeat?"<<endl;
        cout<<"Please only enter 'y' or 'Y'"<<endl;
        cin>>answer;
        
        }while (answer == 'y' || answer == 'Y');
	return 0;
}
