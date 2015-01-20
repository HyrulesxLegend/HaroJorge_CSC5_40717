/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 20, 2015, 10:27 AM\
 * Purpose: Make a game "23"
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    char thPick=23;//Toothpick
    bool computer;
    short nPckRmv; //number of toothpicks removed
    
    //Playing the game
    do {
        //Designate the player
        computer=false;
        //Ask player how many tooth picks to remove        
        do{
            cout<<"There are "<<static_cast<int>(thPick);cout<<" left to remove.";
            cout<<" How many tooth picks do you want to remove"<<endl;
            cout<<"Choose 1, 2, or 3"<<endl;
            cin>>nPckRmv;
        }while(nPckRmv<=0 || nPckRmv>-4 || nPckRmv >thPick);
        //Remove the number of toothpicks
        thPick -=nPckRmv;
        //Designate the computer
        computer = true;
        //Utilize logic from the book
        if(thPick>4){
            nPckRmv =4-nPckRmv;
            thPick-=nPckRmv;
        }else if (thPick>=2&&thPick<=4) {
            thPick=1;
        }else if (thPick==1){
            thPick==0;
            computer=false;
        }
    }while (thPick >1);
    
    //Output the winner and loser
    if(computer){
        cout<<"Computer wins, you lose"<<endl;
    }else {
        cout<<"Computer loses, You win"<<endl;
    }
    
    //Exit the Game
    return 0;
}

