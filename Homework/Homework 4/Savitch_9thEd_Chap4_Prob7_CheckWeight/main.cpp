/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 30, 2017, 12:20 PM
 * Purpose:  Calculate your weight.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSERTH=5.972e27f; //Mass of the earth in grams
const float GCONST=6.673e-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f;//conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of the earth in miles

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float myWeight;//Result in lbs
    float myMass=6;//Units of slugs
    
    //Map inputs to outputs or process the data
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RADERTH*RADERTH*CNVMFT*CNVMFT);
    
    //Output the transformed data
    cout<<"You weigh "<<myWeight<<" lbs"<<endl;
    
    //Exit stage right!
    return 0;
}

