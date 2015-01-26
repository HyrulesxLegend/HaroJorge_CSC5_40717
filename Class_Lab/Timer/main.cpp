/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 26, 2015, 10:04 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y, begTime, endTime,ans;
    char answer;
    do{             //another do-while loop for repeating the program*
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    begTime=static_cast<unsigned int>(time(0));
    cout<<"What is " <<x<<" + "<<y<<endl;
    cout<<"You have 5 seconds to answer"<<endl;
    cout<<"Wait for the next prompt!!"<<endl;
    do {
        endTime=static_cast<unsigned int>(time(0));
        
    }while (endTime-begTime < 5);
    cout<<"Your answer is?"<<endl;
    cin>>ans;
    //Determine if correct
    if(ans == (x+y))cout<<"You are correct"<<endl;
    else cout<<"You are wrong"<<endl;
    cout<<"would you like to repeat program?"<<endl;
    cin>>answer;
    //Exit Stage right
    
    }while (answer == 'y' || answer == 'Y');
    return 0;
}

