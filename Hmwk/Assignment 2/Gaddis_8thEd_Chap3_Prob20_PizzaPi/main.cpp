/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 27th, 2016 1:06 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Needed for Pi function
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1.0);//PI

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   oneSlice=14.125,    //Area of one slice of pizza
            numSlice,           //Number of slices
            pizArea,            //Area of pizza
            radius,             //Radius of pizza
            diamtr;             //Diameter of pizza
    
    //Input values
    cout<<"What is the diameter of the pizza in inches?"<<endl; //Ask the user to input the diameter of pizza in inches
    cin>>diamtr;                                                //input
            
    //Process values -> Map inputs to Outputs
    radius=diamtr/2;            //Calculate radius
    pizArea=PI*pow(radius,2);   //Calculate area of pizza
    numSlice=pizArea/oneSlice;  //Calculate number of slices
            
    //Decimal point
    cout<<fixed<<showpoint<<setprecision(1);    //Fixed decimal point to 1 place
    
    //Display Output
    cout<<"The number of slices is "<<numSlice<<endl;      
    
    //Exit Program
    return 0;
}