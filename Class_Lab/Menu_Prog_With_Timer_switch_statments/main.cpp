/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Purpose: Menu program with switch statements and timer 
 * Created on January 26, 2015, 10:34 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants
const float RATEINCR = .076f;
const float CONC = 1e-3f;//Sweetener concentration == .001
//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Hello, this program allows you to access Programs in one program"<<endl;
    cout<<"Solution 1 Savitch 9thEd Chap 2 Prob 1"<<endl;
    cout<<"Solution 2 Savitch 9thEd Chap 2 Prob 3"<<endl;
    cout<<"Solution 3 Savitch 9thEd Chap 2 Prob 2"<<endl;
    cout<<"The Timer_V2 example for flowcharting is case 10"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"For Projects, Input 6-9 skipping, while keeping in mind "
            <<"Proj4 is not present,"<<endl;
    cout<<"Projects only go from 1-5 skipping 4"<<endl;
    cout<<"Now please input(In numbers) which solution you would like to see."<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch (choice) {
        case 1:{
            cout<<"You have chosen Solution 1"<<endl;
            float wtCoke=3.5e2f;//Weight of coke in grams
            float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
            float wtMouse=3.5e1f; //Weight of mouse in grams
            float kPer;//kill person
            float wtDsPer;//weight desired of person
            int nCans; //number of cans
            //Input desired weight of desired person
            cout<<"Input your desired weight in grams "<<endl;
            cout<<"Note: grams are a mass not weight"<<endl;
            cout<<"All people using metric system are nuts"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            //Calculation
            kPer = kMouse/wtMouse * wtDsPer;
            nCans = kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;
            break;
        }
        case 2: {
            cout<<"You have chosen Solution 2"<<endl;
             int oldSal, retrPay, newSal, mntSal;
    
            //Prompt User 
            cout<<"Hello, this program will determine your new salary for six months."<<endl;
            cout<<"Please enter your current annual salary."<<endl;
            cin>>oldSal;
    
            retrPay = oldSal/2 * RATEINCR;
            newSal = oldSal + oldSal * RATEINCR;
            mntSal = newSal/12;
    
            //Output new salary
            cout<<"Your new annual salary is   $"<<newSal<<endl;
            cout<<"your new monthly salary is  $"<<mntSal<<endl;
            cout<<"your new retroactive pay is $"<<retrPay<<endl;
    
            //Ask if user wants to repeat program
            char answer;
            cout<<"would you like to calculate new Pay?"<<endl;
            cin>>answer;
            if(answer=='Y' || answer=='y'){
                 cout<<"Hello, this program will determine your new salary for six months."<<endl;
                 cout<<"Please enter your current annual salary."<<endl;
                 cin>>oldSal;
    
                 retrPay = oldSal/2 * RATEINCR;
                 newSal = oldSal + oldSal * RATEINCR;
                 mntSal = newSal/12;
    
                 //Output new salary
                 cout<<"Your new annual salary is   $"<<newSal<<endl;
                 cout<<"your new monthly salary is  $"<<mntSal<<endl;
                 cout<<"your new retroactive pay is $"<<retrPay<<endl;  
         }
            break;
        }
        case 3: {
             cout<<"You have chosen Solution 3"<<endl;
             //Declare variables
             float number, guess, r;
             //Input a number
             cout<<"Input a number to estimate it's square root"<<endl;
             cout<<"The format will be a positive float"<<endl;
             cin>>number;
             //First pass
             guess=number/2;
             r=number/guess;
             guess=(guess+r)/2;
             //Output the first pass
             cout<<"First Pass calculate -> "<<guess<<endl;
             //Second Pass
             r=number/guess;
             guess=(guess+r)/2;
             //Output the second pass
             cout<<"Second Pass calculate -> "<<guess<<endl;
             //Third Pass
             r=number/guess;
             guess=(guess+r)/2;
             //Output the third pass
             cout<<"Third Pass calculate -> "<<guess<<endl;
             //Fourth Pass
             r=number/guess;
             guess=(guess+r)/2;
             //Output the fourth pass
             cout<<"Fourth Pass calculate -> "<<guess<<endl;
             //Exit stage right

            break;
        }
        case 4: {
            cout<<"You have chosen Solution 4"<<endl;
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
             cout<<"because he ate it I am currently rewriting my homework and hope you"<<endl;
             cout<<"will accept it late."<<endl;
             cout<<endl;
             cout<<"Sincerely,"<<endl;
             cout<<yName<<endl;
             
             break;
        }
        case 5: {
            cout<<"You have chosen solution 5"<<endl;
                float radius, vm;
    
                cout<<"Enter radius of a sphere."<<endl;
                cin>>radius;

                vm=(4.0/3.0) * 3.1415 * radius * radius;

                cout<<"The volume is " <<vm<<endl;
                
                break;
        }
        case 6: {
              //Declare variables
            cout<<"You have chosen Project 1"<<endl;
            const float CONC = 1e-3f;//Sweetener concentration == .001
            float wtCoke=3.5e2f;//Weight of coke in grams
            float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
            float wtMouse=3.5e1f; //Weight of mouse in grams
            float kPer;//kill person
            float wtDsPer;//weight desired of person
            int nCans; //number of cans
            //Input desired weight of desired person
            cout<<"Input your desired weight in grams "<<endl;
            cout<<"Note: grams are a mass not weight"<<endl;
            cout<<"All people using metric system are nuts"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            //Calculation
            kPer = kMouse/wtMouse * wtDsPer;
            nCans = kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;
            //Exit Stage right!  
            break;
        } 
        case 7: {
            cout<<"You have chosen Project 2"<<endl;
            //Declare variables
            int oldSal, retrPay, newSal, mntSal;

            //Prompt User 
            cout<<"Hello, this program will determine your new salary for six months."<<endl;
            cout<<"Please enter your current annual salary."<<endl;
            cin>>oldSal;

            retrPay = oldSal/2 * RATEINCR;
            newSal = oldSal + oldSal * RATEINCR;
            mntSal = newSal/12;

            //Output new salary
            cout<<"Your new annual salary is   $"<<newSal<<endl;
            cout<<"your new monthly salary is  $"<<mntSal<<endl;
            cout<<"your new retroactive pay is $"<<retrPay<<endl;

            //Ask if user wants to repeat program
            char answer;
            cout<<"would you like to calculate new Pay?"<<endl;
            cin>>answer;
                if(answer=='Y' || answer=='y'){
                 cout<<"Hello, this program will determine your new salary for six months."<<endl;
                 cout<<"Please enter your current annual salary."<<endl;
                 cin>>oldSal;

                 retrPay = oldSal/2 * RATEINCR;
                 newSal = oldSal + oldSal * RATEINCR;
                 mntSal = newSal/12;

                 //Output new salary
                 cout<<"Your new annual salary is   $"<<newSal<<endl;
                 cout<<"your new monthly salary is  $"<<mntSal<<endl;
                 cout<<"your new retroactive pay is $"<<retrPay<<endl;  
            }
        
            break;
        }
        case 8: {
            cout<<"You have chosen Project 3"<<endl;
                //Declare variables
            int oldSal, retrPay, newSal, mntSal;
            int ammnth;//any amount of months
            //Prompt User 
            cout<<"Hello, this program will determine your new salary for any ammount of months."<<endl;
            cout<<"Please enter your current annual salary."<<endl;
            cin>>oldSal;
            cout<<"enter the amount of months you want"<<endl;
            cin>>ammnth;

            retrPay = oldSal/2 * RATEINCR + ammnth;
            newSal = oldSal + oldSal * RATEINCR;
            mntSal = newSal/12;


            //Output new salary
            cout<<"Your new annual salary is   $"<<newSal<<endl;
            cout<<"your new monthly salary is  $"<<mntSal<<endl;
            cout<<"your new retroactive pay is $"<<retrPay<<endl;

            //Ask if user wants to repeat program
            char answer;
            cout<<"would you like to calculate new Pay?"<<endl;
            cin>>answer;
            if(answer=='Y' || answer=='y'){
                 cout<<"Hello, this program will determine your new salary for six months."<<endl;
                 cout<<"Please enter your current annual salary."<<endl;
                 cin>>oldSal;

                 retrPay = oldSal/2 * RATEINCR;
                 newSal = oldSal + oldSal * RATEINCR;
                 mntSal = newSal/12;

                 //Output new salary
                 cout<<"Your new annual salary is   $"<<newSal<<endl;
                 cout<<"your new monthly salary is  $"<<mntSal<<endl;
                 cout<<"your new retroactive pay is $"<<retrPay<<endl;  
            }
            break;
        }
        case 9: {
            cout<<"You have chosen Project 5"<<endl;
                //Declare Variables
    
            int diff, people, roomcap;
            char ans;

            do {
            cout << "Enter the Maximum Room Capacity: ";
            cin >> roomcap;
            cout <<"Enter the number of people attending: ";
            cin >> people;
            diff = roomcap - people;


           if ( diff >= 0 )
           {
               cout<<"It is legal to hold a meeting. "<<diff<< " more can attend the meeting."
                       <<endl;
           }
           else
           {
               cout<<"It is not legal to hold a meeting. "<<-diff<<" has to leave."
                       <<endl;
           }

        cout << "\nEnter Y to repeat " << endl;
        cin >> ans;

        }while (ans == 'y' || ans == 'Y');
          break;
        
        }
        case 10: {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTim=10;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    //Determine if correct
    if(totTim>endTim-begTim){
        if(ans==(x+y))cout<<"You are Correct"<<endl;
        else cout<<"You are wrong"<<endl;
    }else{
        cout<<"You took too much time!"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
    }
    break;
        }
        
        default: cout<<"Incorrect choice!"<<endl;
    }
    
    return 0;
}
