/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 23, 2015, 4:55 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function Prototypes
float inflation (float a,float b);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float start; //Initial price of item
    float end;   //End price of the item      
    cout<<"This program calculates the rate of inflation."<<endl;
    cout<<"choose an item and compare its price between a period of time"<<endl;
    
    cout<<"What was the price of the item initially? $";
    cin>>start;
    cout<<"What is the end price of the item within the period? $";
    cin>>end;
    
    float inf= inflation(start,end);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" the rate of inflation is "<<abs(inf)<<"%."<<endl;
    cout<<"Note:If the price change decreased, then it is the rate of deflation."<<endl;
          
    return 0;
}
float inflation (float a,float b)
{
    float r;
    r= (b-a)/a*100;
    return r;
}