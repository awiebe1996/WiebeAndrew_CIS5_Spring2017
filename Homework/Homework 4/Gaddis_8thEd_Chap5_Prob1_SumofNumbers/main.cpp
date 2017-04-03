/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 3, 2017, 11:00 AM
 * Purpose:  Sum of Numbers.
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
    float integer=1;    //The first number that it will display
    float PosNum;       //The last number it will display
    
    //Initialize variables
    cout<<"Please input a positive number."<<endl;  
    cin>>PosNum;    //Input of the last number
    if(PosNum<=0)   //The loop that will ask user to enter a positive number    
    {
     cout<<"Try again using a number that is greater than or equal to 1"<<endl;
    }
              
    do{    
    while(PosNum>=integer)
    {
    cout<<"The sum of numbers up to "<<integer<<endl;
    integer++; //adding 1 to the integer
    }
}while(integer>=1);//do-while loop that will go if the number is greater or equal to 1

    //Exit stage right!
    return 0;
}

