/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 01:00 PM
 * Purpose:  Pennies.
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
    float penny=1;  //amount of pennies in $
    float days;     //amount of days this person has worked
    float day=1;    //The minimum days that can be worked
    float total;    //The total amount of money earned in $
    
    //Initialize variables
    cout<<"How many days have you worked?"<<endl;
    cin>>days;
   
   if(days<=0){ //If the user enters a 0-negative number
       cout<<"Please enter a integer for the number of days"<<endl;
               return 0;
   } 
        cout<<"You have made 1$ on the 1 day."<<endl;    
   
    while(day<=days-1){
        penny = penny*2;//squaring the pennies
        cout<<"You have made "<<penny/100<<"$ on the "<<day+1<<" day."<<endl;
        day++;          //days increment
        total+=penny;   //calculating the total
    }
    
    cout<<"Your total pay was "<<(total+1)/100<<"$"<<endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

