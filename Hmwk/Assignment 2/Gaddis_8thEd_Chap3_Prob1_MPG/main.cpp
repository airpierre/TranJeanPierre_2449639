/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 21st, 2016 9:42 AM
 * Purpose:  MPG
 */

//System Libraries Here
#include <iostream> //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here                                                                              
    float galHeld,  //Number of gallons car tank can hold
            miles,  //Number of n=miles that can be driven on a full tank
            mpg;    //Number of miles per gallon
    
    //Input or initialize values Here
    cout<<"How many gallons can your tank hold?"<<endl; //Ask the user how many gallons can their tank hold
    cin>>galHeld;                                       //Input the number of Gallons
    cout<<endl<<"How many miles can you drive on a full tank?"<<endl; //Ask the user how many miles can be driven on a full tank
    cin>>miles;                                         //Input the number of miles driven
    
    //Process/Calculations Here
    mpg=miles/galHeld;  //Calculate miles per gallon
    
    //Output Located Here
    cout<<"Your miles per gallon is "<<mpg<<endl;   //Output the miles per gallon

    //Exit
    return 0;
}

