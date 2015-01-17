/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 15, 2015, 8:12 PM
 * Purpose: Astrology Program.
 */
#include <iostream>
#include <string>


using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables

    bool cusp=false;
    int month, day;
    string sign;
    char ans;
    do {
        //Prompt for the input 
        cout<<"Input the numerical/integer month you were born on"<<endl;
        cin>>month;
        cout<<"Input the integer day you were born on"<<endl;
        cin>>day;
        //Determine the sign
        if (month ==1&&day<20)sign ="Capricorn";
        else if (month ==1&&day>=20)sign = "Aquarius";
        else if (month ==2&&day<=18)sign = "Aquarius";
        else if (month ==3&&day>=19)sign="Pisces";
        else if (month ==2&&day>=20)sign="Pisces";
        else if (month ==3&&day>=21)sign="Aries";
        else if (month ==4&&day<=19)sign="Aries";
        else if (month ==4&&day>=20)sign="Tarus";
        else if (month ==5&&day<=20)sign="Tarus";
        else if (month ==5&&day>=21)sign="Gemini";
        else if (month ==6&&day<=21)sign="Gemini";
        else if (month ==6&&day>=22)sign="Cancer";
        else if (month ==7&&day<=22)sign="Cancer";
        else if (month ==7&&day>=23)sign="Leo";
        else if (month ==8&&day<=22)sign="Leo";
        else if (month ==8&&day>=23)sign="Virgo";
        else if (month ==9&&day<=22)sign="Virgo";
        else if (month ==9&&day>=23)sign="Libra";
        else if (month ==10&&day<=22)sign="Libra";
        else if (month ==10&&day>=23)sign="Scorpio";
        else if (month ==11&&day<=21)sign="Scorpio";
        else if (month ==11&&day>=22)sign="Sagittarius";
        else if (month ==12&&day<=21)sign="Sagirtarius";
        else if (month ==12&&day>=22)sign="Capricorn";
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
        else cout<<endl;
        cout<<"redo? Enter Y || y to repeat."<<endl;
        cin>>ans;
    
    }while ((ans == 'Y') ||  (ans == 'y'));
    
    return 0;
}

