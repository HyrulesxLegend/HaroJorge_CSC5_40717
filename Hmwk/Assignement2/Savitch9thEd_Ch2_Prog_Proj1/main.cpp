/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 14, 2015, 7:38 AM
 * Purpose: to calculate how much soda pop you can consume before you die.
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables
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
    //Exit Stage right!
    
    return 0;
}

