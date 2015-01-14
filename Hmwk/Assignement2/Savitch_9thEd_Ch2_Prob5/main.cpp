/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 8:17 PM
 * Purpose: computes the volume of a sphere.
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Exectution Begins Here

int main(int argc, char** argv) {
    float radius, vm;
    
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
    vm=(4.0/3.0) * 3.1415 * radius * radius;
    
    cout<<"The volume is " <<vm<<endl;
    

    return 0;
}

