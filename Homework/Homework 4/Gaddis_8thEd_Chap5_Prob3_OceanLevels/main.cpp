/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 12:00 PM
 * Purpose:  Ocean Levels.
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
    float millYr=1.5f;//The number of millimeters risen each year
    float years=1.0f; //The number of years starting at 1
    float total;      //The amount that has risen within a certain amount of years
        do{
        
     total=(years*millYr); 
     cout<<"The ocean has risen "<<total<<" millimeters in the past "
             <<years<<" year/s."<<endl<<endl;
     years++;   //an increment of one adding to the years
     
           }while(years<=25);//do this while years is less than or equal to 25
    
    return 0;
}

