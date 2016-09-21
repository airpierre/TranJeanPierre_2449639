/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose:Calculate the average 
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
    float          varA=28, //Variable A
                   varB=32,  //Variable B    
                   varC=37, //Variable C
                   varD=24, //Variable D
                   varE=33, //Variable E
                   numVar=5, //number of variables 
                   sum,     //sum of variables
                   varAvg;  //Total average of variables
    //Input values
    
    //Process values -> Map inputs to Outputs
    sum=varA+varB+varC+varD+varE; //Calculates the sum of the variables
    varAvg=sum/numVar; //Calculates the average of the variables
    
    //Display Output
    cout<<"The total amount of the variables is = "<<sum<<endl;
    cout<<"The average of the variables is      = "<<varAvg<<endl;

    //Exit Program
    return 0;
}