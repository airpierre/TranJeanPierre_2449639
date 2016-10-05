/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 4th, 2016
   Purpose:  Calculate fat
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;    //Percentage
const unsigned char cpgFat=9;       //One gram of fat has 9 calories

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float           pFat;                           //Percentage of fat
    float           calories, gramsFat, calsFat;    //Amount of calories, grams of fat, calories from fat
    
    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Set decimal point to 2 places
    
    //Input values
    cout<<"How many calories are in your food?"<<endl;  //Ask the user how many calories
        cin>>calories;
    cout<<"How many grams of fat are in your food?"<<endl;  //Ask the user how many grams of fat
        cin>>gramsFat;
   
    //Process values -> Map inputs to Outputs
        calsFat=gramsFat*cpgFat;                                    //Calories from fat calculation
        pFat=calsFat/calories*100;                                      //Percentage of fat in food
        
    //Input Validation
    if(calories<0||gramsFat<0)                                                          //If calories or grams of fat are less than 0 then display
    {
        cout<<"Error. One of the values entered was not valid, please re-enter."<<endl; //Display error
        return 1;   //Return failure
    }else if(calsFat>calories)
    {   
        cout<<"Error, calories from fat cannot exceed total calories. please re-enter."<<endl; //Display error
        return 1;   //Return failure
    }
        
    //Display Output
    cout<<"The amount of calories from fat is = "<<calsFat<<endl;   //Display amount of calories from fat
    if(pFat<=30)                                                     //If percentage of fat is less than 30 then display
    {
        cout<<"The percentage of fat is = "<<pFat<<endl;            //Display percentage of fat
        cout<<"The food is low in fat"<<endl;                       //Display
    }else 
        cout<<"The percentage of fat is = "<<pFat<<endl;            //Display percentage of fat
        
    //Exit Program
    return 0;
}