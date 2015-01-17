/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 1:04 AM
 * Purpose: Astrology Program modded to display compatible signs.
 * Note to Dr. Lehr: For some reason it is not letting me repeat program,
 * I have no clue as to why..
 */
#include <iostream>
#include <string>


using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables

    bool cusp=false;
    int month, day, element;
    string sign;
    int air, earth, fire, water;
    char ans;
    do {
        //Prompt for the input 
        cout<<"Input the numerical/integer month you were born on"<<endl;
        cin>>month;
        cout<<"Input the integer day you were born on"<<endl;
        cin>>day;
        //Determine the sign
        if (month ==1&&day<20)sign ="Capricorn, and element earth.";
        else if (month ==1&&day>=20)sign = "Aquarius, and element air.";
        else if (month ==2&&day<=18)sign = "Aquarius, and element air.";
        else if (month ==3&&day>=19)sign="Pisces, and element water..";
        else if (month ==3&&day>=21)sign="Aries, and element fire.";
        else if (month ==4&&day<=19)sign="Aries, and element fire.";
        else if (month ==4&&day>=20)sign="Tarus, and element earth.";
        else if (month ==5&&day<=20)sign="Tarus, and element earth.";
        else if (month ==5&&day>=21)sign="Gemini, and element air.";
        else if (month ==6&&day<=21)sign="Gemini, and element air.";
        else if (month ==6&&day>=22)sign="Cancer, and element water.";
        else if (month ==7&&day<=22)sign="Cancer, and element water.";
        else if (month ==7&&day>=23)sign="Leo, and element fire.";
        else if (month ==8&&day<=22)sign="Leo, and element fire.";
        else if (month ==8&&day>=23)sign="Virgo, and element earth.";
        else if (month ==9&&day<=22)sign="Virgo, and element earth.";
        else if (month ==9&&day>=23)sign="Libra, and element air.";
        else if (month ==10&&day<=22)sign="Libra, and element air.";
        else if (month ==10&&day>=23)sign="Scorpio, and element water.";
        else if (month ==11&&day<=21)sign="Scorpio, and element water.";
        else if (month ==11&&day>=22)sign="Sagittarius, and element fire.";
        else if (month ==12&&day<=21)sign="Sagirtarius,and element fire.";
        else if (month ==12&&day>=22)sign="Capricorn, and element earth.";
        //Output the sign and the cusp
        if(month ==1&&day>18 || day<22)cusp=true;
        if(month ==2&&day>16 || day<20)cusp=true; 
        if(month ==3&&day>19 || day<23)cusp=true;
        if(month ==4&&day>19 || day<23)cusp=true;
        if(month ==5&&day>19 || day<23)cusp=true;
        if(month ==6&&day>19 || day<23)cusp=true;
        if(month ==7&&day>19 || day<23)cusp=true;
        if(month ==8&&day>19 || day<23)cusp=true;
        if(month ==9&&day>19 || day<23)cusp=true;
        if(month ==10&&day>19 || day<23)cusp=true;
        if(month ==11&&day>19 || day<23)cusp=true;
        if(month ==12&&day>19 || day<23)cusp=true;
        
        //Determine the sign
        cout<<"Your sign is "<<sign;
        if (cusp)cout<<" and you are on the cusp"<<endl;
        cout<<"Please enter the element given to you "<<endl;
        cin>>element;
        
                        //Compatible signs
        if (element ==earth)cout<<"you are compatible with other Taurus, Virgo, Capricorn "<<endl;
        else if (element ==fire)cout<<"you are compatible with other Aries, Leo Sagittarius "<<endl;
        else if (element ==air)cout<<"you are compatible with other Gemini, Libra, Aquarius "<<endl;
        else if (element ==water)cout<<"you are compatible with other Cancer, Scorpio, Pisces "<<endl;
        
        cout<<"redo? Enter Y || y to repeat."<<endl;
        cin>>ans;
    
    }while ((ans == 'Y') ||  (ans == 'y'));
    
    return 0;
}


