/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 18, 2015, 10:37 PM
 * Purpose: to calculate loan and interest to pay off 
 */
//System Libraries

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
   float intpay,intial_balance,install,intrest,period; //interest payment,loan amount,installment amount,interest rate,mo. to pay loan
    
    cout<<"What is the interest rate? :";
    cin>>intrest;
    cout<<"What is the loan amount? :";
    cin>>intial_balance;
    cout<<"what is the length of the loan (in months) :";
    cin>>period;
    int month=0;
    install=intial_balance/period;
    float balance=intial_balance;         
    float MonthInt= (intrest/100)/12;     //Monthly interest rate
    float TotalInt=0;               //The sum of the Interest paid
    float Princpay;                 //Amount paid towards principal
    
    
    
    
    
    
    while(balance>install){
        month++;                    //Counts the months
        intpay=MonthInt*balance;    //money paid towards interest
        TotalInt+=intpay;           //Sum of all Interest paid
        Princpay= install-intpay;
        balance-=Princpay;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"at month "<<month<<" the interest paid is $"<<TotalInt<<endl;
        cout<<" and the remaining balance is $"<<balance<<endl;
    }
        cout<<"At month "<<month<<" the balance is "<<balance<<"\n";
        cout<<endl;
        cout<<"The total amount paid towards interest is $"<<TotalInt<<endl;
    
    return 0;
}


