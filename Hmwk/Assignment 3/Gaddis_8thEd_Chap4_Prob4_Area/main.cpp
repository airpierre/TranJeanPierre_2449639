/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 4th, 2016
   Purpose:  Calculate area of rectangle and then compare
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
    float   length1, length2, width1,
             width2, area1, area2;       //Length and width of both rectangles
    
    //Input values
    cout<<"Enter the length and width of two rectangles"
         <<" the program will calculate the area and determine which area is greater"<<endl;    //Ask the user to input length and width of two rectangles
    cout<<"What is the length in inches of the first rectangle?"<<endl;         //Ask the user to input length of first rectangle
        cin>>length1;                                                               //Input
    cout<<"What is the width in inches of the first rectangle?"<<endl;          //Ask the user to input width of first rectangle
        cin>>width1;                                                                //Input
    cout<<"What is the length in inches of the second rectangle?"<<endl;        //Ask the user to input length of second rectangle
        cin>>length2;                                                               //Input
    cout<<"What is the width in inches of the second rectangle?"<<endl;         //Ask the user to input width of second rectangle
        cin>>width2;                                                                //Input
    
    //Process values -> Map inputs to Outputs
    area1=length1*width1;   //Calculation of area of first rectangle
    area2=length2*width2;   //Calculation of area of second rectangle
        if(area1>area2||area2<area1)           //If area of first rectangle is greater than area of second then display
            cout<<"The area of rectangle one is greater than the area of rectangle two";
        else if(area1<area2||area2>area1)      //If area of second rectangle is greater than area of first then display
            cout<<"The area of rectangle two is greater than the area of rectangle one";
        else if(area1==area2)                  //If areas are the same then display
            cout<<"The areas of both of the rectangles are the same."<<endl;
    
    //Display Output
    
    //Exit Program
    return 0;
}