/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 9:15 AM
 * 
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functions Prototypes

//Exectution Begins Here!
int main(int argc, char** argv) {
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y  !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    for(int X=1;X>=0;X--){
         for(int Y=1;Y>=01;Y--){
            cout<<(X?'T':'F')<<" ";
            cout<<(Y?'T':'F')<<"  ";
            cout<<(!X?'T':'F')<<"  ";
            cout<<(!Y?'T':'F')<<"    ";
            cout<<(X&&Y?'T':'F')<<"    ";
            cout<<(X||Y?'T':'F')<<"   ";
            cout<<(X^Y?'T':'F')<<"     ";
            cout<<(X^Y^Y?'T':'F')<<"     ";
            cout<<(X^Y^X?'T':'F')<<"       ";
            cout<<(!(X||Y)?'T':'F')<<"     ";
            cout<<(!X&&!Y?'T':'F')<<"         ";
            cout<<(!(X&&Y)?'T':'F')<<"      ";
            cout<<(!X||!Y?'T':'F')<<"   ";
            cout<<endl;
         }
    }

    return 0;
}