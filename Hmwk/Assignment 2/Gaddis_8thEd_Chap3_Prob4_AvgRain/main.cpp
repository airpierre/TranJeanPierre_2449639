/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 28th, 2016 11:48 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
#include <string>     //Required for string function  
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string  monthA,     //First month
            monthB,     //Second month
            monthC;     //Third month
    float   rainA,      //Rainfall of first month
            rainB,      //Rainfall of second month
            rainC,      //Rainfall of third month
            avgRain,    //Average amount of rain
            sumRain,    //Sum of rainfall
            numMnth=3;  //Number of months
    
    //Input values
    cout<<"Enter the names of 3 months"<<endl;                          //Tell the user to enter 3 months
    cout<<"What is the name of the first month?"<<monthA<<endl;         //Ask the user the name of the first month
    cin>>monthA;                                                        //Input             
    cout<<"What is the name of the second month?"<<monthB<<endl;        //Ask the user the name of the second month
    cin>>monthB;                                                        //Input
    cout<<"What is the name of the third month?"<<monthC<<endl;         //Ask the user the name of the third month
    cin>>monthC;                                                        //Input
    cout<<"How many inches of rain were there in "<<monthA<<"?"<<endl;  //Ask the user how many inches of rainfall
    cin>>rainA;                                                         //Input
    cout<<"How many inches of rain were there in "<<monthB<<"?"<<endl;  //Ask the user how many inches of rainfall
    cin>>rainB;                                                         //Input
    cout<<"How many inches of rain were there in "<<monthC<<"?"<<endl;  //Ask the user how many inches of rainfall
    cin>>rainC;                                                         //Input
    
    //Process values -> Map inputs to Outputs
    sumRain=rainA+rainB+rainC;                  //Calculate the sum of rainfall
    avgRain=sumRain/numMnth;                    //Calculate the average rainfall
    
    //Decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Sets the decimal place 2 places
    
    //Display Output
    cout<<"The average amount of rain for "<<monthA<<","    //Display the average amount of rain for the 3 months
        <<" "<<monthB<<","<<"and "<<monthC<<" is = "<<avgRain
        <<" inches"<<endl;
    
    //Exit Program
    return 0;
}