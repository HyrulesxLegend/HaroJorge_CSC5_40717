/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 21, 2015, 11:12 AM
 * Purpose: put in two masses and distance to give you force
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^/g/sec^2

//Function Prototypes
//F            m1     m2      d
float atrForc(float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, Values found on Google
    float mEarth=5.972e24f; //mass of earth Kilograms
    float wtMe=105.0f; //Weight of me in lbs
    float rEarth=6.371e3;//Radius of earth in kilometers
    //Conversions for consistent units
    mEarth*=1e3;//convert to grams ->10^3g/Kg
    float mMe=wtMe*453.59;//453.59g/lb
    rEarth*=(1e3f*1e2f);//10^3m/km*10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mMe,rEarth);
    float lbs=dynes/4.44822e5f;//Conversion 1lb/4.4dynes
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    //Exit Stage right
    return 0;
}

float atrForc(float m1, float m2, float d){
    return G*m1*m2/d/d;
}