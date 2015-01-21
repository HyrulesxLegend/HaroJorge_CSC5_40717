/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 21, 2015, 8:19 AM
 */
#include <iostream>
#include <ctime>
#include <cmath>

#include <cstdlib>

using namespace std;

//Global Constants
const unsigned int MAXRAND=pow(2,31)-1;


int main(int argc, char** argv) {
    // Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a max variable
    int max=rand();
    int loop = 210000000;
    //now loop to find the maximum rnadom number
    for (int i=2;i<=loop; i++) {
        int r=rand();
        if(r>max)max=r;
    }
    //Now output the result
    cout<<"2^31= "<<MAXRAND<<endl;
    cout<<"maximum found = "<<max<<endl;
    
    return 0;
}

