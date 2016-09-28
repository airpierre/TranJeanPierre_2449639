/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 27th, 11:08 PM
   Purpose:  calculate number of calories eaten
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
    float           cperBag=30,     //Number of cookies per bag
                    calpSrv=300,    //Calories per serving
                    sperBag=10,     //Servings per bag
                    srvSize,        //Serving size
                    calpCk,         //Calories per cookie
                    cAte,           //Number of cookies ate
                    calAte;         //Calories ate
    
    //Input values
    cout<<"How many cookies did you eat?"<<endl;    //Ask the user to input how many cookies were eaten
    cin>>cAte;                                      //Input
    
    //Process values -> Map inputs to Outputs
    srvSize=cperBag/sperBag;       //Calculate serving size
    calpCk=calpSrv/srvSize;       //Calculate calories per cookie
    calAte=cAte*calpCk;           //Calculate calories ate
    
    
    //Display Output
    cout<<"If you ate "<<cAte<<" cookies,"<<endl;                       //Display number of cookies ate
    cout<<"Then the amount of calories consumed is = "<<calAte<<endl;   //Display amount of calories consumed
    
    //Exit Program
    return 0;
}