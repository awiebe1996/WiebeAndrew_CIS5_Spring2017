/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 11:20 AM
 * Purpose:  Find the Assessment value and Property tax from the Actual value. 
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
    float actVal,   //Actual value in $
          assessV,  //Assessment value in $
          propTax;  //Property Tax in $  
    //Initialize variables
    
    //Input data
    cout<<"What is the actual value of the property?"<<endl;
    cin>>actVal;    //Actual value in $
    
    //Map inputs to outputs or process the data
    assessV=actVal*0.6;                 //Assessment value calculation
    propTax=(0.75f/100.0f)*assessV;     //Property tax calculation       
    
    //Output the transformed data
    cout<<"The Assessment Value is "<<assessV<<"$"<<endl;
    cout<<"The Property Tax on the Assessment Value is "<<propTax<<"$"<<endl;
    
    //Exit stage right!
    return 0;
}

