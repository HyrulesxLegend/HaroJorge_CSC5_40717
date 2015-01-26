/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Purpose: Value of the user's holding of one stock.
 * Created on January 25, 2015, 9:17 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
float computeprice(int whole_value, int numerator, int denominator);

//Execution Begins Here!
int main( )
{
    // Declare Variables
      int whole_value, numerator, denominator, stock_price, number_of_shares;
      float price, total_value;
      char ans;
      do
      {
           cout << "Enter stock price and number of shares, please." << endl;
           cout << "Enter price as integers: dollars, numerator, denominator." <<endl;
           cin >> whole_value;
           cin >> numerator;  
           cin >> denominator;
           cout << "Enter number of shares held.";     
           cin >> number_of_shares;    
           
           price = computeprice (whole_value, numerator, denominator);
      
           total_value = price * number_of_shares;
           cout<<fixed<<setprecision(2)<<showpoint;
           cout<<"Total Value of Stock = $" << total_value <<endl;
      
           price = whole_value + (static_cast<float>(numerator)/denominator);
           
           cout <<"Y or y repeats, any other character quits"<<endl;
         cin>> ans;
     }while (ans=='Y' || ans== 'y');
  

      return 0;
}

float computeprice(int whole_value, int numerator, int denominator)
{
       float p;
       p = whole_value + (static_cast<float>(numerator)/denominator);
       return (p);
       }
