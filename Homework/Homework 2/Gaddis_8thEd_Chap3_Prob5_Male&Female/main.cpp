/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 11:20 AM
 * Purpose:  Create a program that calculates the percentage of men and women 
 *           enrolled in a class based upon input from the user.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //Conversion to percentage

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float males,    //Males enrolled in this class
          females,  //Females enrolled in this class
          mPrcnt,   //Percentage of males in the class
          fPrcnt,   //Percentage of females in the class
          ClssSz;   //Size of the class
    
    //Initialize variables
    
    //Input data
    cout<<"How many males are enrolled in the class?"<<endl;
        cin>>males;//Males enrolled in this class
    cout<<"How many females are enrolled in the class?"<<endl;
        cin>>females;//Females enrolled in this clas
        
    //Map inputs to outputs or process the data
        ClssSz= males + females;                //finding the overall class size
        mPrcnt= (males / ClssSz) * PERCENT;     //calculating the percentage of males in the class
        fPrcnt= (females / ClssSz) * PERCENT;   //calculating the percentage of females in the class
    
    //Output the transformed data
    cout<<"The class is "<<mPrcnt<<"% male and "<<fPrcnt<<"% female."<<endl;  
        
    //Exit stage right!
    return 0;
}

