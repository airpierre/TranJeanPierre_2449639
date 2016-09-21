/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 21st, 2016 10:22 AM
 * Purpose:  Test average
 */

//System Libraries Here
#include <iostream> //Input/Output 
#include <iomanip>  //Format
using namespace std; //Using Name-space in the System Library

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   testA,       //Test A results
            testB,       //Test B results
            testC,       //Test C results
            testD,       //Test D results
            testE,       //Test E results
            sum,         //Sum of test results
            numTest=5,   //Number of tests
            avg;         //Average test result
    
    //Input or initialize values Here
    cout<<"What was the score of test A?"<<endl;    //Ask the user test score
    cin>>testA;                                     //Input the test score
    cout<<"What was the score of test B?"<<endl;    //Ask the user test score
    cin>>testB;                                     //Input the test score
    cout<<"What was the score of test C?"<<endl;    //Ask the user test score
    cin>>testC;                                     //Input the test score
    cout<<"What was the score of test D?"<<endl;    //Ask the user test score
    cin>>testD;                                     //Input the test score
    cout<<"What was the score of test E?"<<endl;    //Ask the user test score
    cin>>testE;
    
    //Process/Calculations Here
    sum=testA+testB+testC+testD+testE;  //Calculate the sum of the test scores
    avg=sum/numTest;                    //Calculate the average of the test scores
    
    //Decimal place
    cout<<fixed<<showpoint<<setprecision(1);    //Show 1 decimal point
    
    //Output Located Here
    cout<<"The sum of the test scores is = "<<sum<<endl;    //Show the user sum of test scores
    cout<<"The amount of tests taken is = "<<numTest<<endl; //Show the user the number of tests that were taken
    cout<<"The average test score is = "<<avg<<endl;        //Show the user the average test score

    //Exit
    return 0;
}

