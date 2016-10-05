/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 1st, 2016 6:44 PM
   Purpose:  Determine what number is greater
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
    float          valOne,      //Value one
                   valTwo;      //Value two
                   
    //Input values
    cout<<"Input two values, and the program will determine which value is greater"<<endl;
    cout<<"Input a value for A"<<endl;  //Ask the user to input value of one
    cin>>valOne;                        //Input
    cout<<"Input a value for B"<<endl;  //Ask the user to input value of two
    cin>>valTwo;                        //Input
    
    //Process values -> Map inputs to Outputs
    (valOne<valTwo)?                                    //Is value one less than value two?
    cout<<""<<valOne<<" is less than"<<" "<<valTwo:     //If value one is less than value two then display
    cout<<""<<valOne<<" is greater than"<<" "<<valTwo;  //If value one is greater than value two then display
  
    
    //Display Output
    
    //Exit Program
    return 0;
}