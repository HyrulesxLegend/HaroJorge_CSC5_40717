
/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 18, 2015, 8:56 PM
 * Purpose: Determines if an object will sink or float according to the buoyancy
 *          formula.
 */
//System Libraries
#include <iostream>
//Global constants
const float PI=3.14159;


using namespace std;
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    const float Y=62.4;// Specific weight of water
    float radius, weight;
    float V; //formula for volume
    float Fb;//Force buoyancy formula
    char ans;
    do{
    //Output to user
    cout<<"Hello, this short program will determine if your "
            <<"object will sink or float."<<endl;
    cout<<"Input the weight of the object."<<endl;
    cin>>weight;
    cout<<"Input the radius of the object"<<endl;
    cin>>radius;
    //Calculation
    V= .75*PI*radius*radius*radius;
    Fb= V*Y;
    if (Fb>=weight){
        cout<<"Your object will float!"<<endl;
    }
    else {
        cout<<"Your object will sink!"<<endl;
    }
    cout<<"repeat program? press y or Y."<<endl;
    cin>>ans;
    }
     while(ans =='y' || 'Y');
    return 0;
}

