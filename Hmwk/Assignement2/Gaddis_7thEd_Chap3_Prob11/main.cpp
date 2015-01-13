/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 10:16 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
using namespace std;
int main(int argc, char** argv) {
    //Declare variables and initialize 
    float bcToDlr=232.8;//Jan 13th, 2015 10:17am
    float erToDlr=0.849381;//Jan 13th, 2015 10:17am
    float ynToDlr=118.03;//same date
    float bitcoin, dollars, euros, yen;
    //Input the number of bitcoin and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase"<<endl;
    cin>>bitcoin;
    //Convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    return 0;
}
