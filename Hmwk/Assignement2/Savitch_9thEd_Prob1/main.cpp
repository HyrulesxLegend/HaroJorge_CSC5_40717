/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 10:49 AM
 * Purpose: Metric Converstion. Hmwk.
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float CMTNONS=3.527392e4f;//Conversion from Metric Tons to Ounces

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal contents in ounces.
    float wtPackTn;//Weight of cereal contents in Metric Tons.
    float nPackTn;//Number of cereal boxes in a Metric Ton.
    //Prompt User for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    //Ask if user would like to repeat the calculatiion
    cout<<"Would you like to repeat the calculattion?"<<endl;
    cout<<"Or make a new calculations?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y' || answer=='y'){
         //Prompt User for cereal weights.
         cout<<"Input the number of ounces on the cereal"<<endl;
         cout<<"box to convert to metric tons."<<endl;
         cout<<"Format is float ddd.ddd (onces)"<<endl;
         cin>>wtPackOz;
         //Calculate the results
         wtPackTn=wtPackOz/CMTNONS;
         nPackTn=1/wtPackTn;
         //Output the results
         cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
         cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    }
    return 0;
}

