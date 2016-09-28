/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 25th, 7:46 PM
   Purpose:  Cookie Recipe
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   cperRec=48,         //Cookies made per recipe
            csugPer=1.5,        //Cups of sugar per 48 cookies
            cflrPer=2.75,       //Cups of flour per 48 cookies
            cbutPer=1,          //Cups of butter per 48 cookies
            cWanted,            //Number of cookies wanted
            amtNeed,            //Amount of ingredient needed
            sugNeed,            //Amount of sugar needed for custom batch
            flrNeed,            //Amount of flour needed for custom batch
            butNeed;            //Amount of butter needed for custom batch
               
    //Input values
    cout<<"How many cookies do you want to make?"<<endl;    //Ask the user to input how many cookies they want to make
    cin>>cWanted;                                           //Input
    
    //Process values -> Map inputs to Outputs
    if(cWanted<=48)amtNeed=cperRec/cWanted,     //If the amount of cookies wanted is less than 48
                   sugNeed=csugPer/amtNeed,     //Calculate amount of sugar needed
                   flrNeed=cflrPer/amtNeed,     //Calculate amount of flour needed
                   butNeed=cbutPer/amtNeed;     //Calculate amount of butter needed
    else if(cWanted>48)amtNeed=cWanted/cperRec, //If the amount of cookies wanted is more than 48
                   sugNeed=csugPer*amtNeed,     //Calculate amount of sugar needed
                   flrNeed=cflrPer*amtNeed,     //Calculate amount of flour needed
                   butNeed=cbutPer*amtNeed;     //Calculate amount of butter needed
    
    //Decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Fixed decimal point to 2 places
                       
    //Display Output 
    cout<<"The amount of sugar needed is "<<sugNeed<<" cups"<<endl;     //Show the user amount of sugar needed
    cout<<"The amount of butter needed is "<<butNeed<<" cups"<<endl;    //Show the user amount of butter needed
    cout<<"The amount of flour needed is "<<flrNeed<<" cups"<<endl;     //Show the user amount of flour needed
    
    //Exit Program
    return 0;
}