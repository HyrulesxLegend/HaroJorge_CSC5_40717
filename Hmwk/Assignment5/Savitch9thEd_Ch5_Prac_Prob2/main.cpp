/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 23, 2015, 7:13 PM
 * Purpose: converts from feet/inches to meters/centimeters & vise versa.
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

//Execution Begins Here!
int main() {
    //Declare Variables
 string answer;
 do { 
    float feet, inches, meters, cm; 
      cout << "Feet: "; 
      cin >> feet; 
      cout << "Inches: "; 
      cin >> inches;
   
      meters = (feet + inches/12) * 0.3048;

      cm = modf(meters, &meters);
      cm *= 100; 
      cout << "There are " << meters << " meters, " << cm << " centimeters in " 
           << feet << " feet, " << inches << " inches" << endl; 
    cout << "Would you like to do another conversion? yes/no : "; 
    cin >> answer;
 } while (answer == "y" || answer=="Y"); 

return 0;
//Exit Stage Right!!
}

