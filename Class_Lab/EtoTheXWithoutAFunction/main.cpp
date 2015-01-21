/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 21, 2015, 8:52 AM
 * Purpose: E to the X without a Function
 *  */

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1, exactEx, x;
    //Prompt user for the power of e^x
    cout<<"What x in e^x would you like to use"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++) {
        int nFactrl=1, n;
        //Do the calculation
        for (int i =1;i<=n;i++) {
               int nFactrl*=i;
        }
        approxEx+=(pow(x,n)/nFactrl);
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //compare the results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x       = "<<exactEx<<endl;
    
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit stage right!
    return 0;
}


