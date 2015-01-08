/*
* File: main.cpp
* Author: Jorge Haro
* Created on January 8, 2015, 12:28 AM
* Purpose: Hmwk. To output a giant "C" in any character user inputs.
*/
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
//Declare variables
char c;//character
//Prompt user for a character
cout << "This program will output a large block letter \"C\""<<endl;
cout << "With a character you input." << endl;
cout << "Input a character "<< endl;
cin >> c;
cout << endl << endl;
//Output a large letter "C" with a character user enter
cout << " " << " " << c << c << c << c << c<< endl;
cout << " " << c << c << "   " << c << c << endl;
cout << " " << c << endl;
cout << " " << c << endl;
cout << " " << c << endl;
cout << " " << c << endl;
cout << " " << c << endl;
cout << " " << c << c << "   " << c << c << endl;
cout << " " << " " << c << c << c << c << c<< endl;
//Exit stage right
return 0;
}