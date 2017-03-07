/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on February 27, 2017, 11:40 AM
 * Purpose:  Write a program that displays the amount
 *  of state and county sales tax that would be tacked on a purchase.
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
    float Purchse=95,   //the 95 dollar purchase
            SteTx,      //State Sales Taxes
            CountTx;    //County Sales Taxes
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    SteTx=Purchse*0.04;     //State sales tax equation
    CountTx=Purchse*0.02;   //County sales tax equation
    //Output the transformed data
    cout<<"The amount of state sales tax that you would pay for a 95$ purchase is "<<SteTx<<"$"<<endl;
    cout<<"The amount of county sales tax that you would pay for a 95$ purchase is "<<CountTx<<"$"<<endl;
    //Exit stage right!
    return 0;
}

