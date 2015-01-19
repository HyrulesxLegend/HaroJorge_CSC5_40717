/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 6:44 PM
 * Purpose: writes out prime numbers between 3-100
 */
//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;
//Exectutions Begins Here!
int main(int argc, char** argv) {
    
    for (int x = 3; x <= 100; x++)
{
     for (int y = 2; y <= (x - 1); y++)
     {
         if ((x % y) == 0)
         break;
         if((x-1)==y)
         cout<<x<<endl;
     }    
}

    return 0;
}

