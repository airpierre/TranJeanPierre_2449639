/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 4th, 2016 
   Purpose:  Magic Dates
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
    unsigned short month, day, year;    //Month, date, and two digit year
    
    //Input values
    cout<<"Input a month in numeric form, a day, and a two digit year."     //Ask the user to input month, date, year
        <<" The program will calculate if it is a magic date."<<endl;
    cin>>month>>day>>year;                                                  //User input
    
    //Process values -> Map inputs to Outputs
    if (month*day==year) cout<<"This is a magic date"<<endl;                //If month * day is equal to year display
    else cout<<"This isn't a magic date."<<endl;                            //If month * day is not equal to year display
    
    
    //Display Output

    //Exit Program
    return 0;
}