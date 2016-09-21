/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 16, 2016
   Purpose:  Sum of two numbers
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
    unsigned short varA=50,  //Amount of variable A
                   varB=100, //Amount of varaible B
                   total;    //Total amount of variables
    //Input values
    
    //Process values -> Map inputs to Outputs
    total=varA+varB;    //Calculates the total of the variables
    
    //Display Output
    cout<<"The amount of variable A is          = "<<varA<<endl;
    cout<<"The amount of variable B is          = "<<varB<<endl;
    cout<<"The total amount of the variables is = "<<total<<endl;
            
    //Exit Program
    return 0;
}