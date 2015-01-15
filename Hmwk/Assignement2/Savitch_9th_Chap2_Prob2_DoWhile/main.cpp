/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 10:49 AM
 * Purpose: Babylonian Square root Calculator
 *      new version to utilize loops
 *      Do-While Implementation
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number, guess, r, count=0;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Initialize the guess
    guess=number/2;
    do{
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //Output the first pass
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
   // }while(guess != r);//My preferred techinque
    }while (abs(guess-r)>.01);//The books preference
    
    //Exit stage right

    return 0;
}