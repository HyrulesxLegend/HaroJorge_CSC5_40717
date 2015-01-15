/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 7:43 AM
 * Purpose: This program determines whether a meeting room is in violation of fire law regulations.
*/
//System Libraries
#include <iostream>
#include <stdlib.h>
using namespace std;

//Execution Begins Here!
int main (){
    //Declare Variables
    
    int diff, people, roomcap;
    char ans;

    do {
    cout << "Enter the Maximum Room Capacity: ";
    cin >> roomcap;
    cout <<"Enter the number of people attending: ";
    cin >> people;
    diff = roomcap - people;

    
   if ( diff >= 0 )
   {
       cout<<"It is legal to hold a meeting. "<<diff<< " more can attend the meeting."
               <<endl;
   }
   else
   {
       cout<<"It is not legal to hold a meeting. "<<-diff<<" has to leave."
               <<endl;
   }

cout << "\nEnter Y to repeat " << endl;
cin >> ans;

}while (ans == 'y' || ans == 'Y');

    return 0;
}
