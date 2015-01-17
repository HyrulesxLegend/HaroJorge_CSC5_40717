/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 10:06 AM
 * Purpose: compute total interest, amount, and minimum payment for credit card
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float intDue;//Interest due
    float total_due;//Total amount due
    float minPay1; //minimum payment
    float minPay2;//
    float minDue; //minimum due
    float input;
    float int1;//Interest 1
    float int2;//Interest 2
    float totalInt; //Total interest
    char ans;
    do{
        cout<<"Please enter account balance $:"<<endl;
        cin>>input;
        if  (input < 1000)
        {
            totalInt = .015 * input;
        }
        else {
            int1= .015*1000;
            int2= .01*(input-1000);
            total_due= totalInt + input;
        }
        if (total_due <=10)
        {
            minDue=total_due;
        }
        else {
            minPay1=total_due * .1;
            minPay2=10;
        }
        if (minPay2 > minPay1)
        {
            minDue= minPay2;
        }
        else {
            minDue= minPay1;
        }
    cout<<"Interest due $"<<intDue<<"."<<endl;
    cout<<"Total due $"<<total_due<<"."<<endl;
    cout<<"Minimum payment due $"<<minDue<<"."<<endl;
    cout<<"Input 'Y' or 'N' to redo"<<endl;
    cin>>ans;
    }while (ans == 'Y' || ans == 'y');
    
    return 0;
}

