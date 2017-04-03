/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 11:00 AM
 * Purpose:  Sum of numbers.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float membfee=2500.0f;  //the starting membership fee
    float percnt=0.04f;     //the percent that will increase each year
    float sixyear=6;        //the sixth year of membership
    float year=1;           //The first year of membership
    float amount;           //the amount of money that needs to be paid in $
    
    //Initialize variables
    
    //Input data
    do{
        amount=((membfee*(percnt*year))+membfee);//Finding the amount needed to pay
        cout<<"The membership will cost "<<amount<<"$ for "<<year<<" year/s of membership."<<endl;    
        year++; //Year increment
    }while(year<=sixyear);
    
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

