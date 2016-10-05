/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on October 4, 2016
   Purpose:  Calculate discount on software sales
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;    //Percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float           pPrice=99,cost,    //Price per package, quantity sold, discount, total cost
                    qtySold, discnt,
                    totCost, pdiscnt;
                      
    //Input values
    cout<<"How many packages would you like to purchase?"<<endl;        //Ask the user how many packages they would like to purchase
    cin>>qtySold;                                                       //Input
                
    //Process values -> Map inputs to Outputs
    cost=pPrice*qtySold;                                                //Calculate cost
    
    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);                            //Set decimal place to 1
    
    //Input validation
    if(qtySold<0)                       //If user enters quantity less than 0 display
    {   
        cout<<"Invalid number"<<endl;   //Display error
        return 1;                       //Return failure
    }
    
    //Display Output
    if(qtySold>=10&&qtySold<=19)                                        //If quantity sold is between 10 and 19, display
    {
        pdiscnt=20;                                                         //Discount percentage
        discnt=cost*pdiscnt/100;                                            //Calculate Discount amount
        totCost=cost-discnt;                                                //Calculate total cost
        cout<<"The cost of "<<""<<qtySold<<" packages is = $"<<cost<<endl;  //Display cost before discount
        cout<<"The percentage you qualify for is "<<pdiscnt<<"%"<<endl;     //Display discount percentage
        cout<<"The discount amount is = $"<<discnt<<endl;                   //Display discount amount
        cout<<"The total cost after discount was applied is = $"<<totCost<<endl;    //Display total cost after discount
    }else if(qtySold>=20&&qtySold<=49)                                  //If quantity sold is between 20 and 49, display
    {
        pdiscnt=30;                                                         //Discount percentage
        discnt=cost*pdiscnt/100;                                            //Calculate Discount amount
        totCost=cost-discnt;                                                //Calculate total cost
        cout<<"The cost of "<<""<<qtySold<<" packages is = $"<<cost<<endl;  
        cout<<"The percentage you qualify for is "<<pdiscnt<<"%"<<endl;     
        cout<<"The discount amount is = $"<<discnt<<endl;                                
        cout<<"The total cost after discount was applied is = $"<<totCost<<endl;    
    }else if(qtySold>=50&&qtySold<=99)                                  //If quantity sold is between 50 and 99, display
    {
        pdiscnt=40;                                                     //Discount percentage
        discnt=cost*pdiscnt/100;                                        //Calculate Discount amount
        totCost=cost-discnt;                                            //Calculate total cost
        cout<<"The cost of "<<""<<qtySold<<" packages is = $"<<cost<<endl;
        cout<<"The percentage you qualify for is "<<pdiscnt<<"%"<<endl;
        cout<<"The discount amount is = $"<<discnt<<endl;
        cout<<"The total cost after discount was applied is = $"<<totCost<<endl;
    }else if(qtySold>=100)                                              //If quantity sold is over 100, display
    {
        pdiscnt=50;                                                     //Discount percentage
        discnt=cost*pdiscnt/100;                                        //Calculate Discount amount
        totCost=cost-discnt;                                            //Calculate total cost
        cout<<"The cost of "<<""<<qtySold<<" packages is = $"<<cost<<endl;
        cout<<"The percentage you qualify for is "<<pdiscnt<<"%"<<endl;
        cout<<"The discount amount is = $"<<discnt<<endl;
        cout<<"The total cost after discount was applied is = $"<<totCost<<endl;
    }else                                                               //If quantity sold is less than 10 then display
        cout<<"I'm sorry, you don't qualify for a discount. Your total cost is = $"<<cost<<endl;
    
    //Exit Program
    return 0;
}