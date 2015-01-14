/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 7:48 PM
 * Purpose: Program that plays Mad Lib.
 */
//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare the variables
    string iName, yName, food, num , adj, color, animl;
    //Input User names
    cout<<"Hello this is Mad Lib game."<<endl;
    cout<<"Please enter your name."<<endl;
    cin>>yName;
    cout<<"Please enter your Instructors name"<<endl;
    cin>>iName;
    cout<<"Please enter a food"<<endl;
    cin>>food;
    cout<<"Please enter a number between 100 and 200."<<endl;
    cin>>num;
    cout<<"Please enter and adjective."<<endl;
    cin>>adj;
    cout<<"Please enter a color."<<endl;
    cin>>color;
    cout<<"Please enter an animal."<<endl;
    cin>>animl;
    cout<<endl;
    //Output story
    cout<<"Dear Instructor "<<iName<<","<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<num<<". Next, my "<<adj<<" pet"<<endl;
    cout<<animl<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it I am curently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<yName<<endl;
    return 0;
}

