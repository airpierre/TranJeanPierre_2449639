/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose:  Calculate amount of commission 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100; //Global conversion

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short  numStk=750,     //number of stock
                    ppStk=35.00,    //Price per stock
                    amtPaid,        //Amount paid without commission
                    amtCom,         //Amount of commission
                    totAmt;         //Total amount paid
    unsigned char   pCom=2;         //Percentage of commission
    
    //Process values -> Map inputs to Outputs
    amtPaid=numStk*ppStk;           //Amount paid for stocks
    amtCom=amtPaid*pCom/PERCENT;    //Amount of commission paid
    totAmt=amtPaid+amtCom;          //Total amount paid
    
    //Display Output
    cout<<"The amount paid for the stock without commission is = $"<<amtPaid<<endl;
    cout<<"The amount of commission paid is                    = $"<<amtCom<<endl;
    cout<<"The total amount paid is                            = $"<<totAmt<<endl;
    //Exit Program
    return 0;
}