/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 5:55 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float sec, mph, mpm; //minutes per minute, mile per hour
    
    cout<<"What is the Mile Per Hour you are traveling?"<<endl;
    cin>> mph;
        mpm= 60/mph;
        sec= 60/mph - mpm * 60;
        
    cout<<"if you are going "<<mph<<"mph then you are"<<endl;
    cout<<"traveling at "<<mpm<<"minutes and "<<sec<<"seconds per mile."<<endl;
   
    return 0;
}

