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
    //Declare 2 boolean variables
    bool X,Y;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y  !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true; Y=true;
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

    //Fill in the second row
    Y=false;
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

    //Exit stage right!
    Y=true; X=false;
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

    X=false; Y=false; 
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
    
    //Swap example
    int a=2, b=3;
    //Output the values
    cout<<"Before the swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    //Output the values afer swap
    cout<<"After temp swap"<<endl;
    cout<<"a"<<a<<endl;
    cout<<"b"<<b<<endl;
    //swap
    a=a^b;
    b=a^b;
    a=a^b;
    //Output 
 
    return 0;
}