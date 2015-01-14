/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 14, 2015, 9:20 AM
 * Purpose:To calculate retroactive pay for any amount of months.
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants
const float RATEINCR = .076f;

//Prototype Functions

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int oldSal, retrPay, newSal, mntSal;
    int ammnth;//any amount of months
    //Prompt User 
    cout<<"Hello, this program will determine your new salary for any ammount of months."<<endl;
    cout<<"Please enter your current annual salary."<<endl;
    cin>>oldSal;
    cout<<"enter the amount of months you want"<<endl;
    cin>>ammnth;
    
    retrPay = oldSal/2 * RATEINCR + ammnth;
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

