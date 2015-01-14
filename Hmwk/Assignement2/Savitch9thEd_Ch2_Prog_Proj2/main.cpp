/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 14, 2015, 8:20 AM
 * Purpose: Calculates Pay increase to a 7.6% increase.
 */
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//Global Constants
const float RATEINCR = .076f;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int oldSal, retrPay, newSal, mntSal;
    
    //Prompt User 
    cout<<"Hello, this program will determine your new salary for six months."<<endl;
    cout<<"Please enter your current annual salary."<<endl;
    cin>>oldSal;
    
    retrPay = oldSal/2 * RATEINCR;
    newSal = oldSal + oldSal * RATEINCR;
    mntSal = newSal/12;
    
    //Output new salary
    cout<<"Your new annual salary is   $"<<newSal<<endl;
    cout<<"your new monthly salary is  $"<<mntSal<<endl;
    cout<<"your new retroactive pay is $"<<retrPay<<endl;
    
    //Ask if user wants to repeat program
    char answer;
    cout<<"would you like to calculate new Pay?"<<endl;
    cin>>answer;
    if(answer=='Y' || answer=='y'){
         cout<<"Hello, this program will determine your new salary for six months."<<endl;
         cout<<"Please enter your current annual salary."<<endl;
         cin>>oldSal;
    
         retrPay = oldSal/2 * RATEINCR;
         newSal = oldSal + oldSal * RATEINCR;
         mntSal = newSal/12;
    
         //Output new salary
         cout<<"Your new annual salary is   $"<<newSal<<endl;
         cout<<"your new monthly salary is  $"<<mntSal<<endl;
         cout<<"your new retroactive pay is $"<<retrPay<<endl;  
    }
    
    
    return 0;
}

