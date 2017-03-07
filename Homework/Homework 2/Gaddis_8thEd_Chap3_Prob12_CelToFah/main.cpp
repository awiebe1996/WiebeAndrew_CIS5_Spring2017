/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 11:20 AM
 * Purpose:  Write a program that converts Celsius to Fahrenheit
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
    float fahr,  //Number of degrees in Fahrenheit 
          cels; //Number of degrees in Celsius
    
    //Initialize variables
    
    //Input data
    cout<<"Enter the temperature in Celsius."<<endl;
    cin>>cels;  //Number of degrees in Celsius
    
    //Map inputs to outputs or process the data
    fahr=((9.0f/5.0f)*cels)+32;   //Conversion from Celsius to Fahrenheit
    
    //Output the transformed data
    cout<<cels<<" degrees in Celsius is equal to "<<fahr<<" degrees Fahrenheit."<<endl;
    
    //Exit stage right!
    return 0;
}

