/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose:  Calculate miles per gallon
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
    unsigned short galUsd=15,   //Gallons used  
                   milDrvn=375, //Miles driven
                   milPg;       //Miles per gallon
    //Input values
    
    //Process values -> Map inputs to Outputs
    milPg=milDrvn/galUsd;
    
    //Display Output
    cout<<"The car can hold "<<galUsd<<" gallons"<<endl; //Displays the amount of gallons car can hold
    cout<<milDrvn<<" is the miles driven"<<endl;        //Displays amount of miles driven
    cout<<milPg<<" is the miles per gallon"<<endl;      //Displays the amount of mpg
    //Exit Program
    return 0;
}