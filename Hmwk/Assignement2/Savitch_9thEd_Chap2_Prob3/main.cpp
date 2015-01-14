/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 5:55 PM
 * Purpose: convert MPH into minutes and seconds to run a mile.
 */
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Converstion from Min to Sec

//Function Prototypes

//Exectution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float mph; //Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute as a float
    int impm;//Miles per minute as an integer
    float fmspm;//Fraction left for seconds per mile
    //Prompt for the Input
    cout<<"How many miles are you running"<<endl;
    cout<<"in an hour?"<<endl;
    cout<<"Format answer as a float."<<endl;
    cin>>mph;
    //Calculate the relevant pace
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the results
    cout<<mph<<" = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs)per mile"<<endl;
    
  
    return 0;
}
