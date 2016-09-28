/* 
 * File:   main.cpp
 * Author: Jean-Pierre Tran
 * Created on September 26th, 2016
 * Purpose:  Grade Ternary
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char grade;
    unsigned short score;
    
    //Input or initialize values Here
    cout<<"Input the score, receive your grade as output"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';   
   
    //Output Located Here
    cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;
   
    //Exit
    return 0;
}

