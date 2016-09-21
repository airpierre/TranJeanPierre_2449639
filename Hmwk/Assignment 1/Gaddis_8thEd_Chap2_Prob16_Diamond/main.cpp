/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on August 29, 2016, 9:41 AM
   Purpose:  
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
    char s=' '; //space character
    char d; //diamond character
    
    //Input values
    cout<<"What character would you like to use to make the diamond?"<<endl;
    cin>>d;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<s<<s<<s<<d<<s<<s<<s<<endl;
    cout<<s<<s<<d<<d<<d<<s<<s<<endl;
    cout<<s<<d<<d<<d<<d<<d<<s<<endl;
    cout<<d<<d<<d<<d<<d<<d<<d<<endl;
    cout<<s<<d<<d<<d<<d<<d<<s<<endl;
    cout<<s<<s<<d<<d<<d<<s<<s<<endl;
    cout<<s<<s<<s<<d<<s<<s<<s<<endl;
    //Exit Program
    return 0;
}