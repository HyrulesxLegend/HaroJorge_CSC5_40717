/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 9:56 AM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
char choice, choice1, choice2;

cout<<"Hello, this is a game of Rock, Paper, Scissors."<<endl;

 do
 {
 cout<< "Player 1 please choose either R<ock, P<aper, or S<cissors. "<<endl;
 cin>> choice1;
 cout<< endl;
 cout<< "Player 2 please choose either R<ock, P<aper, or S<cissors. "<<endl;
 cin>> choice2;
 cout<< endl;

 
if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'P' || choice2 == 'p'))
 {
 cout<< "Nobody wins! It's a tie!" <<endl; 
}
 if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'R' || choice2 == 'r')) 
{
 cout<< "Player 1 wins!, Paper covers Rock" <<endl;
 }
 if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'S' || choice2 == 's'))
 {
 cout<< "Player 2 wins!, Scissors cut Paper" <<endl;
 }
 if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'R' || choice2 == 'r'))
 {
 cout<< "Nobody wins :( It's a tie!" <<endl; 
}
 if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'P' || choice2 == 'p'))
 {
 cout<< "Player 2 wins!, Paper covers Rock" <<endl;
 }
 if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'S' || choice2 == 's'))
 {
 cout<< "Player 1 wins!, Rock breaks Scissors" <<endl;
 }
 if((choice1 == 'S' || choice1 == 's') && (choice2 == 'S' || choice2 == 's'))
 {
 cout<< "Nobody wins! *womp womp womp*" <<endl; 
}
 if((choice1 == 'S' || choice1 == 's') && (choice2 == 'P' || choice2 == 'p'))
 {
 cout<< "Player 1 wins! , Scissors cut Paper" <<endl;
 }
 if((choice1 == 'S' || choice1 == 's') && (choice2 == 'R' || choice2 == 'r'))
 {
 cout<< "Player 2 wins! , Rock breaks Scissors" <<endl; 
}
 cout<< endl;
 cout<< " Want to play again? Press anything, Press 'N' if otherwise" <<endl;
 cin>> choice;
 cout<< endl;
 if(choice == 'N' || choice == 'n')
 {
 cout<< "Good Bye!"<<endl;
 break;
 } 
}while(choice != 'N' || choice != 'n');

return 0; 
}