/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 02:20 PM
 * Purpose:  Write a program that converts Celsius to Fahrenheit and
 *           will display 1-20 from Celsius to Fahrenheit.
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
          cels=1.0f; //Number of degrees in Celsius
    
    do{
    
    fahr=((9.0f/5.0f)*cels)+32;   //Conversion from Celsius to Fahrenheit
    cout<<cels<<" degrees in Celsius is equal to "
        <<fahr<<" degrees Fahrenheit."<<endl;
    cels++;                       //The increment for Celsius

    }while(cels<21); 
    //Output the transformed data

    
    //Exit stage right!
    return 0;
}


