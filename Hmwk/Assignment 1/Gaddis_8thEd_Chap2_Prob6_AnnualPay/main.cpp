/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose:  Calculate annual pay
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short  payAmt=2200.0,  //Payment amount
                    payPer=26,      //Amount of times paid
                    annSal;         //Annual salary
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    annSal=payAmt*payPer;   //Calculates annual salary
    //Display Output
    cout<<"The payment amount is = $"<<payAmt<<endl;
    cout<<"The amount of times paid is = "<<payPer<<endl;
    cout<<"The annual salary is = $"<<annSal<<endl;
    //Exit Program
    return 0;
}