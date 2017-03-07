/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 2, 2017, 11:20 AM
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
        float NumOGal,   //Number of gallons the car holds
          MilDrv,   //Miles that can drive before fueling is needed
          MPG;          //Miles per gallon
    
    //Initialize variables
    
    //Input data
        cout<<"Please enter the number of gallons your car can hold.";
        cin>>NumOGal;   //Number of gallons the car holds
        cout<<"Now enter the number of miles your car can be driven on a full tank.";
        cin>>MilDrv;    //Miles that can drive before fueling is needed
    
    //Map inputs to outputs or process the data
    MPG=MilDrv/NumOGal; //Miles per gallon calculation
    
    //Output the transformed data
cout<<"If a car holds "<<NumOGal<<" gallons of fuel and travels "<<MilDrv<< " miles per tank of gas, then"
          " this car gets "<<MPG<<" miles per gallon."<<endl;

    //Exit stage right!
    return 0;
}

