/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 20, 2015, 11:34 AM
 */
//Systme Libraries 
#include <iostream>
using namespace std;



int main(int argc, char** argv) {
    //Declare Variables
    unsigned short number;
    //Prompt the user
    cout<<"Input a number from 1000 to 3000"<<endl;
    cin>>number;
    //Determine the number of 1000's
    char thousands=(number-number%1000/1000);
    //Output the thousands in roman numerals
    switch (thousands){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    //Determine the number of 100's
    number-=thousands*1000;
    char hundreds=(number-number%100)/100;
    //output the 100's in roman numerals
    switch (hundreds){
        case 9: cout<<"CM"; break;
        case 8: cout<<"DCCC"; break;
        case 7: cout<<"DCC"; break;
        case 6: cout<<"DC"; break;
        case 5: cout<<"D"; break;
        case 4: cout<<"CD"; break;
        case 3: cout<<"C"; break;
        case 2: cout<<"C"; break;
        case 1: cout<<"C"; break;
        default: ;
    }
    char tens=(number-number%10)/10;
    //output the 10's in roman numerals
    switch (tens){
        case 9: cout<<"XC"; break;
        case 8: cout<<"LXXX"; break;
        case 7: cout<<"LXX"; break;
        case 6: cout<<"LX"; break;
        case 5: cout<<"L"; break;
        case 4: cout<<"XL"; break;
        case 3: cout<<"X"; break;
        case 2: cout<<"X"; break;
        case 1: cout<<"X"; break;
        default: ;
    }
    
    return 0;
}

