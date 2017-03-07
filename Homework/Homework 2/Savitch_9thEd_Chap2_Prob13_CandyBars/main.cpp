/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 7, 2017, 12:10 PM
 * Purpose:  Calculate number of candy bars 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    char sex;                   //Male of Female
    unsigned short ht, wt, age; //height in inches, weight in pounds, and age in years.
    unsigned char cdyCals=230;   //Candy bar calories
    float bmr;                  //Basic Metabolic Rate (calories)
    int nCdyBars;               //Number of candy bars that you can eat
    
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F), Weight(lbs), Height(inches), Age(years)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Map inputs to outputs or process the data
    bmr=(sex=='M')?
        66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt + 4.7f*ht - 4.7f*age;
    nCdyBars=static_cast<int>(bmr/cdyCals);
    
    //Output the transformed data
        cout<<"The number of candy bars you can eat = "<<nCdyBars<<endl;
    
    //Exit stage right!
    return 0;
}

