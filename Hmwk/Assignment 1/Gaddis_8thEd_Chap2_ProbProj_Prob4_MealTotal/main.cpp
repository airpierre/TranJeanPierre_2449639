/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016 4:26PM
   Purpose:  To calculate and show the total bill of a meal.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   mChrg=88.67f,  //Meal Charge
            taxAmt,       //Amount taxed
            tipAmt,       //Amount tipped
            mealAmt,      //Amount of meal after tax
            totBil;       //Total bill amount
    float   pTax= 6.75f, //percentage of tax
            pTip= 20;   //Percentage of tip
    
    //Process values -> Map inputs to Outputs
    taxAmt=mChrg*pTax/PERCENT;      //Calculates amount of tax
    mealAmt=mChrg+taxAmt;           //Calculates amount of meal  
    tipAmt=mealAmt*pTip/PERCENT;    //Calculates amount of tip  
    totBil=mealAmt+tipAmt;          //Calculates total bill amount
    
    //Rounding to 2 decimal places
    int tRound=taxAmt*100+0.5f;     //Shift by 2 decimal places *100 then round up 0.5
        taxAmt=tRound/100.0f;       //Integer truncated then shift back 2 decimal places
    int mRound=mealAmt*100+0.5f;    //Shift by 2 decimal places *100 then round up 0.5
        mealAmt=mRound/100.0f;      //Integer truncated then shift back 2 decimal places
    int tipRnd=tipAmt*100+0.5f;     //Shift by 2 decimal places *100 then round up 0.5
        tipAmt=tipRnd/100.0f;       //Integer truncated then shift back 2 decimal places
    int totRnd=totBil*100+0.5f;     //Shift by 2 decimal places *100 then round up 0.5
        totBil=totRnd/100.0f;
            
    //Display Output
    cout<<"The amount of the meal is = $"<<mealAmt<<endl;
    cout<<"The amount of tax is      = $"<<taxAmt<<endl;
    cout<<"The tip amount is         = $"<<tipAmt<<endl;
    cout<<"The total bill is         = $"<<totBil<<endl;
    //Exit Program
    return 0;
}