/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 18, 2015, 10:09 PM
 * Purpose: provides a list that converts Celsius to Fahrenheit
 */
//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables   
    int cel, far;// Celsius and Fahrenheit 
    //Output to user
    cout<<"This list will Celsius to Fahrenheit."<<endl;
    while(cel>=-60){
        far= (((9*cel)/5)+32);
        cout<<cel<<" degrees Celsius is "<<far<<" degrees Fahrenheit."<<endl;
        cel--;
       
    }
    cout<<"Above is the list Celsius converted to Fahrenheit".<<endl;  
    
    return 0;
}
