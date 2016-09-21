/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 7th, 2016, 1:33 PM
   Purpose: To calculate sales tax
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
    float           purAmt=95,  //Purchase amount
                    totTax,     //Total of tax paid
                    totAmt;     //Total amount paid
    unsigned char   pCtax=2,    //Percentage County tax
                    pStax=4,    //Percentage of State tax
                    pTotax;     //Percentage amount of tax
            
    //Process values -> Map inputs to Outputs
    pTotax=pCtax+pStax;
    totTax=purAmt*pTotax/PERCENT;
    
    
            
    
    //Display Output
    cout<<"Purchase amount is                      = $"<<purAmt<<endl;
    cout<<"Total percentage of tax is              = "<<static_cast<int>(pTotax)<<endl;
    cout<<"Total amount of tax paid on purchase is = $"<<totTax<<endl;
    //Exit Program
    return 0;
}