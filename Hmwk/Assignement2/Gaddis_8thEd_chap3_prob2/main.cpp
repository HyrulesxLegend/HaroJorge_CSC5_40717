/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 12, 2015, 11:24 AM
 * Purpose: my car payment
 */

//System Library
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variable
    float intRate= 0.0319f; // Capital one 
    float msrplus=4e4f;// Loan amount for buick Avenir
    char nPaymnt=60;    // Number of monthly Payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    // Output the inputs
    cout<<"Interest per year = "<<intRate*100*12<<endl;
    cout<<"Number of payments ="<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
   
    return 0;
}

