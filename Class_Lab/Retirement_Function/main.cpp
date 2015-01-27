/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 27, 2015, 9:07 AM
 * Purpose: Use the Babylonian 10 for retirement.
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float retirement(float, float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=75000.0f;
    float invRate=0.05f;
    float defPrct=0.10f;//Babylonian 10
    float ndSave=salary/invRate;
    float retSave=0;//Retirement Savings
    float nmYears;//number of years
    //Heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You need to save $"<<ndSave<<endl;
    cout<<"Year    Savings"<<endl;
    //Calculate When We Can Retire
    for (int year=1; retSave<=ndSave; year++) {
        retSave=retirement(0.0, invRate, defPrct*salary, year);
        cout<<setw(4)<<year<<setw(12)<<retSave<<endl;
    }
    //Exit stage right
    return 0;
}

float retirement(float p, float i, float d, int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}