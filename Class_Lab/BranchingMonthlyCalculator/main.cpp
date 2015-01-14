/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 14, 2015, 11:19 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float i;//Interest Rate Per cent per year
    float t;//Temp variable
    float l;//loan amount in $'s
    unsigned short n; // Number of months
    float mp; //Monthly Payment in $'s
    //Input the variables required 
    cout<<"What is the interest rate in per cent per year! (format float)"<<endl;
    cin>>i;
    i/=(100*12); // Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly Payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly Payment
    if(i<=0) {
        mp=1/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //Display the results
    cout<<""
    cout<<"Your monthly payment = $"<<mp<<endl;
    //Exit stage right!
    return 0;
}

