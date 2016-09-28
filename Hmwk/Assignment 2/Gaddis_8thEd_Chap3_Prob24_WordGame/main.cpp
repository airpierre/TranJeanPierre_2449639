/* 
   File:   main
   Author: Jean-Pierre Tran
   Created on September 28th, 12:27 AM
   Purpose:  Word game
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //Required for string class
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string  name,       //Name
            age,        //Age
            city,       //Name of City
            college,    //Name of College
            prof,       //Profession
            animal,     //Type of animal
            petName;    //Pet name
            
    //Input values
    cout<<"What is your name?"<<endl;       //Ask the user to input their name
    cin>>name;                              //Input
    cout<<"What is your age?"<<endl;        //Ask the user to input their age
    cin>>age;                               //Input
    cout<<"Name a city"<<endl;              //Ask the user to input a city name
    cin>>city;                              //Input
    cout<<"Name a college"<<endl;           //Ask the user to input a college name
    cin>>college;                           //Input
    cout<<"Name a profession"<<endl;        //Ask the user to input a profession
    cin>>prof;                              //Input
    cout<<"Name a type of animal"<<endl;    //Ask the user to input a type of animal
    cin>>animal;                            //Input
    cout<<"What is the pet's name?"<<endl;  //Ask the user to input pet's name
    cin>>petName;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"There was once a person named "<<name<<" who lived in "<<city<<"."     //Display word game
        <<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<"."
        <<" "<<name<<" graduated and went to work as a "<<prof<<"."
        <<"Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petName<<"."
        <<"They both lived happily ever after!"<<endl;
    
          
    //Exit Program
    return 0;
}