/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose:  
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
    float   itmA=15.95f, //Cost of item A
            itmB=24.95f, //Cost of item B
            itmC=6.95f,  //Cost of item C
            itmD=12.95f, //Cost of item D 
            itmE=3.95f,  //Cost of item E
            subTot,     //Subtotal of items
            amtTax,     //Amount taxed
            totPaid;    //Total amount paid
    unsigned char pSaltax=7;
    //Input values
    
    //Process values -> Map inputs to Outputs
    subTot=itmA+itmB+itmC+itmD+itmE;
    amtTax=subTot*pSaltax/PERCENT;
    totPaid=subTot+amtTax;
    
    //Round to 2 decimal places
    int tRound=amtTax*100+0.5f; //Shift by 2 decimal places *100 then round up 0.5
        amtTax=tRound/100.0f;   //Integer truncated then shift back 2 decimal places
    int round=totPaid*100+0.5f; //Shift by 2 decimal places *100 then round up 0.5
        totPaid=round/100.0f;   //Integer truncated then shift back 2 decimal places
    
    //Display Output
    cout<<"The subtotal of the items is = $"<<subTot<<endl;       //Calculates the subtotal of the items
    cout<<"The amount of tax is         = $"<<amtTax<<endl;      //Calculates the amount of tax paid
    cout<<"The total amount paid is     = $"<<totPaid<<endl;    //Calculates the total amount paid
    //Exit Program
    return 0;
}