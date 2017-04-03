/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 02:00 PM
 * Purpose:  Distance traveled.
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
    float mph;//The speed of the vehicle in mph
    float hourTr;//How many hours the car has traveled
    float hour=1;//the first hour the car has traveled
    float distTr;//The distance the car travels in one hour
    
    //Input data
    cout<<"What is the speed of the vehicle in mph?"<<endl;
            cin>>mph;   //The speed of the vehicle in mph
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hourTr;        //How many hours the car has traveled
    
       if(mph<=0||hourTr<1){ //If the user enters a 0-negative number
       cout<<"Please enter a positive number for miles per hour"
             " and a number greater than 1 "<<endl;
               return 0;
   }
    do{
        
        distTr=mph*hour;
        cout<<"If you have traveled at a speed of "<<mph<<"mph for "<<hourTr
            <<" ,then you have traveled "<<distTr<<" miles in hour number "
            <<hour<<endl;
        hour++;
    }while(hour<=hourTr);

    return 0;
}

