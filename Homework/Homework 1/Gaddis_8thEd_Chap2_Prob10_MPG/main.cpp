/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on February 27, 2017, 11:10 AM
 * Purpose:  Write a program that displays miles per gallon.
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
    float NumOGal=15,   //Number of gallons the car holds
          MilDrv=375,   //Miles that can drive before fueling is needed
          MPG;          //Miles per gallon
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    MPG=MilDrv/NumOGal;
    //Output the transformed data
    cout<<"If a car holds 15 gallons of fuel and travels 375 miles per tank of gas, then"
          " this car gets "<<MPG<<" miles per gallon."<<endl;
    //Exit stage right!
    return 0;
}

