/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 12:20 PM
 * Purpose:  Calories Burned.
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
    float minute=3.6f;  //How many calories burned in 1 minute
    float total;        //how many calories are burned in five minutes
    float cycle=1.0f;   //how many times that you worked out for five minutes
    float time=1.0f;    //1 minute
    float times;        //minutes * 5    
    //Initialize variables
    do{

        total=((minute*5)*cycle);   //calculating the amount of calories 
        times=(5*time);             //Calculating the times
        cout<<"For every "<<times<<" minutes, you have burned "<<total<<" calories."<<endl;
        time++;                     //increment
        cycle++;                    //increment
    }while(times<=30);

    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

