/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 28th, 2016 11:10 AM
 * Purpose: Calculate amount of revenue generated from stadium seating
 */

//System Libraries Here
#include <iostream> //Input/Output objects
#include <iomanip>  //Format
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short  seatA=15,   //Cost of Class A seats
                    seatB=12,   //Cost of Class B seats
                    seatC=9,    //Cost of Class C seats
                    numA,       //Number of A seats sold
                    numB,       //Number of B seats sold
                    numC,       //Number of C seats sold
                    revA,       //Revenue generated from Class A    
                    revB,       //Revenue generated from Class B
                    revC,       //Revenue generated from Class C
                    totRev;     //Total revenue generated
    
    //Input or initialize values Here
    cout<<"How many tickets of seat A were sold?"<<endl;    //Ask the user to input amount of Class A seats sold
    cin>>numA;                                              //Input
    cout<<"How many tickets of seat B were sold?"<<endl;    //Ask the user to input amount of Class B seats sold
    cin>>numB;                                              //Input
    cout<<"How many tickets of seat C were sold?"<<endl;    //Ask the user to input amount of Class C seats sold
    cin>>numC;                                              //Input    
    
    //Process/Calculations Here
    revA=seatA*numA;        //Calculate revenue generated from Class A
    revB=seatB*numB;        //Calculate revenue generated from Class B
    revC=seatC*numC;        //Calculate revenue generated from Class C
    totRev=revA+revB+revC;  //Total revenue generated from all seats sold
    
    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Fixed decimal point to 2 places
    
    //Output Located Here
    cout<<"The revenue generated from Class A seats is = $"<<revA<<endl;    //Display amount of revenue generated from Class A seats
    cout<<"The revenue generated from Class B seats is = $"<<revB<<endl;    //Display amount of revenue generated from Class B seats
    cout<<"The revenue generated from Class C seats is = $"<<revC<<endl;    //Display amount of revenue generated from Class C seats
    cout<<"The total amount of revenue generated is = $"<<totRev<<endl;     //Display total amount of revenue

    //Exit
    return 0;
}