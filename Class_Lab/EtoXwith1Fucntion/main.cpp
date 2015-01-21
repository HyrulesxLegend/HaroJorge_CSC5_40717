/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 21, 2015, 8:52 AM
 * Purpose: E to the X with 1 function.
 *  */

#include <iostream>
#include <cmath>
using namespace std;

//Function Prototype
int nFactrl (int);

int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1, exactEx, x, n;
    //Prompt user for the power of e^x
    cout<<"What x in e^x would you like to use"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++) {
        approxEx+=(pow(x,n)/nFactrl);
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //compare the results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x       = "<<exactEx<<endl;
    //Exit stage right!
    return 0;
}

int nFactrl (int n){
    //Declare the variable
    //Note: function only works for values 0 to 13
        int factorial=1;
        if(n==0)return factorial;
        else if (n<=13) {
            for(int i=i; i<=n; i++) {
                factorial*=i;
            }
            return factorial;
        }else {
                return -1;
            }
        }