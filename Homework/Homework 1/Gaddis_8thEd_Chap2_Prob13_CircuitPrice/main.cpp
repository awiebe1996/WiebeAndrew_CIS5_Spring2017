/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on February 27, 2017, 10:10 AM
 * Purpose:  Write a program that displays your
 *  name, address, phone number and college major.
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
    float circBd=14.95, //Original price of a circuit board
            Profit,     //Companies profit percentage
            SellPrc;    //Selling price of the circuit board
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    Profit=circBd*0.35;     //Profit
    SellPrc=Profit+circBd; //Selling price
    //Output the transformed data
    cout<<"The circuit board originally costed "<<circBd<<"$"<<endl;
    cout<<"The company percent profit is at 35%"<<endl;
    cout<<"The selling price of a circuit board with the percent profit added is "<<SellPrc<<"$"<<endl;
    //Exit stage right!
    return 0;
}

