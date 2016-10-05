/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 4th, 2016
   Purpose:  Dollar Game
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float dollar=1.00,        //Dollar value
            quarter=.25,        //Quarter value
            penny=.01,          //Penny value
            nickel=.05,         //Nickel value
            dime=.10;           //Dime value
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   nQrts, nPen, nNckl, nDimes;     //Number of quarters, pennies, nickels, and dimes
    float   sum;                            //Sum of change
    
    //Input values
    cout<<"Insert the number of pennies, nickels, dimes, and quarters you have."<<endl;     //Ask the user to input number of change
    cin>>nPen>>nNckl>>nDimes>>nQrts;                                                        //Input
    
    //Process values -> Map inputs to Outputs
    sum=(nQrts*quarter)+(nPen*penny)+(nNckl*nickel)+(nDimes*dime);                          //Calculate sum of change
    if (sum==dollar) {                                                                      //If sum is equal to dollar then display
        cout<<"Congratulations, you've won the dollar game!"
            <<" You had "<<nPen<<" pennies,"<<" "<<nNckl<<" nickels,"
            <<" "<<nDimes<<" dimes,"<<" and "<<nQrts<<" quarters,"
            <<" which all added up to exactly 1.00 dollar!"<<endl;               
    }else if(sum>dollar) {                                                                  //If sum is greater than a dollar then display
            cout<<"Sorry! The amount entered was over a dollar. Please try again."<<endl;
    }else if(sum<dollar) {                                                                  //If sum is lesser than a dollar then display
            cout<<"Sorry! The amount entered was under a dollar. Please try again."<<endl;
    }
            
    //Display Output

    //Exit Program
    return 0;
}