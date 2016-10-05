/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 3rd, 2016 9:24 AM
   Purpose:  Show roman numerals of 1 through 10
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //Used for string class
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables   
    unsigned short  number;     //Number 1 through 10 input by user
    string  romNum;             //Roman numeral counterpart
    
    //Input values
    cout<<"Input any number 1 through 10 and receive it's roman numeral counterpart"<<endl; //Ask the user to input any number 1 through 10
    cin>>number;                                                                            //Input
            
    //Input Validation
    if(number<1||number>10) {          //Input validation, return error if value entered is less than 1 or greater than 10
        cout<<"Invalid number"<<endl;  //Display error
        return 1;                      //Return failure
    }
    
    //Process values -> Map inputs to Outputs
    switch(number)  {                   //Use switch to determine case
        
        case 10:romNum='X';break;       //Case 10
        case 9: romNum="IX";break;      //Case 9
        case 8: romNum="VIII";break;    //Case 8    
        case 7: romNum="VII";break;     //Case 7
        case 6: romNum="VI";break;      //Case 6
        case 5: romNum='V';break;       //Case 5
        case 4: romNum="IV";break;      //Case 4
        case 3: romNum="III";break;     //Case 3
        case 2: romNum="II";break;      //Case 2
        case 1: romNum='I';break;       //Case 1
    } 
    //Display Output
    cout<<"The roman numeral counterpart of "<<number<<" is "<<romNum<<endl;    //Display roman numeral counterpart
    
    //Exit Program
    return 0;
}