/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Purpose: 
 * Created on January 25, 2015, 9:41 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function Prototypes
float Hat_size(float w,float h);
float Jack_size(float we, float he,float a);

//Execution Begins Here!
int main() {
    //Declare Variables
    float weight,height,age;
    char choose;
    float Waist_size = weight/5.7;
   
    do {
        cout<<"Weight in pounds :"<<endl;
        cin>>weight;
        cout<<"height in inches : "<<endl;
        cin>>height;
        cout<<"Age in years : "<<endl;
        cin>>age;
        cout<<endl;
        cout<<fixed<<showpoint<<setprecision(0);
        cout<<"Your Hat size is "<<Hat_size(weight,height)<<endl;
        cout<<"Your jacket size (chest in inches) is "<<Jack_size(weight,height,age)<<endl;
   
    if(age>=30){
        Waist_size=(weight/5.7)+.1*floor((age-28)/2);
    }
    cout<<"Your waist size is: "<<Waist_size<<endl;
   
    cout<<"Would you like to try again? [Y/N]"<<endl;
    cin>>choose;
    } while(choose=='y'||choose=='Y');
    
    return 0;   
}

float Hat_size(float w,float h){
    return w/h*2.9;
}
float Jack_size(float we, float he,float a) { //weight,height,age
    if (a>=50) return (he*we/288)+.125*floor((a-40)/10);
    return he*we/288;  
}