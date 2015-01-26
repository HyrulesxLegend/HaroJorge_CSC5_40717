/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 25, 2015, 8:57 PM
 * Purpose: to output vehicles mpg.
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here!
int main()
{
//Declare variables
int liters;
float distance;
float gallon = (0.264179*liters);

do
{
  cout << "Please enter how many liters of gasoline is in vehicle 1.";
  cin >> liters;
  cout << "Please enter the distance in miles you traveled in vehicle 1.";
  cin >> distance;

  cout << "Vehicle 1's MPG is:" << (distance/liters) << endl;
  
}while(liters >0);
//Exit Stage Right!
return 0;

}

