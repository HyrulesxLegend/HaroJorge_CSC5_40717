/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 7, 2015, 11:18 AM
 *      Purpose: How easy computers can make mistakes
 */

#include <iostream>

using namespace std;
//Executions begin here!
int main(int argc, char** argv) {
    //Declare 3 variables
    short a,b,c;
    //Prompt for a and b
    cout<<"Input 2 short values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the results
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //Exit stage right!
    return 0;
}

