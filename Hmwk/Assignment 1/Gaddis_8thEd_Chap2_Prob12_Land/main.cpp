/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 13, 2016
   Purpose: Calculate number of acres 
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
    float          oneAcre=43560, //Number of square feet in one Acre
                   land=391876,   //Number of square feet available on land
                   numAcre;       //Number of Acres in the land
    //Input values
     
    //Process values -> Map inputs to Outputs
    numAcre=land/oneAcre;       //Calculates the amount of acres on the land
    
    //Display Output
    cout<<"The amount of square feet in one acre is = "<<oneAcre<<endl;
    cout<<"The amount of square feet available on the tract of land is = "<<land<<endl;
    cout<<"The number of acres on the land is = "<<numAcre<<endl;
    
    //Exit Program
    return 0;
}