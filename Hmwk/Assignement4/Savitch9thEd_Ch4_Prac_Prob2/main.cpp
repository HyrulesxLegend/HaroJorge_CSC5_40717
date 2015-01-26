/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 25, 2015, 9:07 PM
 * Purpose: to Calculate two vehicles MPG 
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
//Declare variables
int liters;
float distance;
float gallon = (0.264179*liters);
char ans;
do
{
  cout << "Please enter how many liters of gasoline is in vehicle 1.";
  cin >> liters;
  cout << "Please enter the distance in miles you traveled in vehicle 1.";
  cin >> distance;

  cout << "Vehicle 1's MPG is:" << (distance/liters) << endl;


  cout << "Please enter how many liters of gasoline is in vehicle 2.";
  cin >> liters;
  
  cout << "Pleas enter the distance in miles you traveled in vehicle 2.";
  cin >> distance;
  
  cout << "Vehicle 2's MPG is:" << (distance/liters)<<endl;
  
  cout << "would you like to repeat?"<<endl;
  cin>>ans;
  
}while(ans == 'y' || ans == 'Y');

return 0;

}
