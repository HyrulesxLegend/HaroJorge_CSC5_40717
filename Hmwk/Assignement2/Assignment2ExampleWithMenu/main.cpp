/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 14, 2015, 11:01 AM
 * Purpose: create menu program to display other programs
 */

//User Libraries

#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants
const float RATEINCR = .076f;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Savitch 9thEd Chap 2 Prob 1"<<endl;
    cout<<"Solution 2 Savitch 8thEd Chap 2 Prob 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch (choice) {
        case 1:{
            cout<<"You have choosen Solution 1"<<endl;
             const float CONC = 1e-3f;//Sweetener concentration == .001
            float wtCoke=3.5e2f;//Weight of coke in grams
            float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
            float wtMouse=3.5e1f; //Weight of mouse in grams
            float kPer;//kill person
            float wtDsPer;//weight desired of person
            int nCans; //number of cans
            //Input desired weight of desired person
            cout<<"Input your desired weight in grams "<<endl;
            cout<<"Note: grams are a mass not weight"<<endl;
            cout<<"All people using metric system are nuts"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            //Calculation
            kPer = kMouse/wtMouse * wtDsPer;
            nCans = kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;
            break;
        }
        case 2: {
            cout<<"You have choosen Solution 2"<<endl;
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
            break;
        }
        default: cout<<"Incorrect choice!"<<endl;
    }
    return 0;
}

