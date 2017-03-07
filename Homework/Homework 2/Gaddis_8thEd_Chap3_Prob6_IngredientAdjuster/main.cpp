/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 01:20 AM
 * Purpose:  Adjust the number of ingredients needed to make a certain number of cookies
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
    float sugar=1.5f,   //The amount of sugar needed for 48 cookies
          butter=1.0f,  //The amount of sugar needed for 48 cookies
          flour=2.75f,  //The amount of sugar needed for 48 cookies
          needSug,      //The amount of sugar needed for the amount of cookies wanted
          needBut,      //The amount of butter needed for the amount of cookies wanted
          needFlo,      //The amount of flour needed for the amount of cookies wanted
          cookie,       //The amount cookies the user wants to make
          batch=48;     //The amount of cookies in 1 batch
    
    //Initialize variables
    
    //Input data
    cout<<"How many cookies would you like to make?"<<endl;
    cin>>cookie;        //The amount cookies the user wants to make
    
    //Map inputs to outputs or process the data
            needSug= sugar / (batch/cookie);    //conversion to find how much sugar is needed
            needBut= butter / (batch/cookie);   //conversion to find how much butter is needed
            needFlo= flour / (batch/cookie);    //conversion to find how much flour is needed
    
    //Output the transformed data
    cout<<"If you want to make "<<cookie<<" cookies, then you will need "
            <<needSug<<" cups of sugar, "<<needBut<<" cups of butter, and "<<needFlo<<" cups of flour."<<endl;
    
    //Exit stage right!
    return 0;
}

