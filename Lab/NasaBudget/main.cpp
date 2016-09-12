/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 12, 2016
 * Purpose:  Calculate the percentage allocated for NASA in Federal budget
 * Federal Budget -> 3.999 trillion from
 *      https://en.wikipedia.org/wiki/2016_United_States_federal_budget 
 * NASA Budget-> $19.3 billion from
 *      https://en.wikipedia.org/wiki/Budget_of_NASA
 */

//System Libraries Here
#include <iostream> //Input/Output objects  
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100; //Conversion to percentage

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float nasBgt=19.3e8f;     //See reference from above
    float fedBgt=3.999e12f;  //See reference from above
    float pNasspd;          //Percentage of NASA spending
    
    //Process values -> Map inputs to Outputs
    pNasspd=nasBgt/fedBgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pNasspd*100+0.5f; //Shift by 2 decimal places *100 then round up 0.5
    pNasspd=round/100.0f;      //Integer truncated then shift back 2 decimal places
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"The Nasa Budget for 2016 = $"<<nasBgt<<endl;
    cout<<"The Federal Budget for 2016 = $"<<fedBgt<<endl;
    cout<<"The Percentage spent on the Military = "<<pNasspd<<"%"<<endl;
            
    //Exit
    return 0;
}

