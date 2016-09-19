/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 19th, 2016 9:57 AM
 * Purpose: Monthly Payment
 */

//System Libraries 
#include <iostream>    //Input/Output objects
#include <iomanip>    //Format
#include <cmath>      //Math Library for power function  
using namespace std; //Name-space used in the System Library

//User Libraries 

//Global Constants 
const int PERCENT=100; //Percentage conversion
const int MONTHS=12;   //Months in a year 
//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nCmPrds=36;    //Number of monthly compounding periods
    float intRate=12;   //Percentage per year
    float loanAmt=1e4f; //$10,000 loan
    float monPay;       //Monthly payment $'s
    float totPaid;      //Total Amount Paid $'s
    float intPaid;      //Total Interest Paid $'s
          
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    intRate/=(PERCENT*MONTHS);
    float temp=pow((1+intRate),nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    int mp=monPay*100+1;  //Calculate number of pennies
    monPay=mp/100.0f;  //Accurate to the penny
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount          :$"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month: "<<setw(8)<<intRate<<endl;
    cout<<"Number of compounding periods: "<<static_cast<int>(nCmPrds)<<setw(8)<<endl;
    cout<<"Monthly payment      :$"<<setw(8)<<monPay<<endl;
    cout<<"Interest paid        :$"<<setw(8)<<intPaid<<endl;
    cout<<"Total paid           :$"<<setw(8)<<totPaid<<endl;

    //Exit
    return 0;
}

