/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on July 19, 2016, 12:10 PM
 * Purpose:  convert acres to ft^2, miles^2
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants
const float CNVACFT=43560;//1 acre = 43560 square feet
const float CNVMIFT=1.0f/5280;//1 Mile equals 5280 feet

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float acres,ftsq,milesq;
    
    //initialize variables
    acres=640.0f;//Number of acres
    
    //Map inputs to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVMIFT*CNVMIFT;
    
    //Output the transformed data
    cout<<" Acres ="<<ftsq
            <<" ft^2 = "<<milesq<<" miles^2"<<endl;

    //Exit
    return 0;
}

