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
    float Town=23.5,    //Gas tank Average for driving in town
          HghWay=28.9,  //Gas tank Average for driving on the highway
          NumOGal=20,   //Number of gallons a cars gas tank is
          TwnDis,       //How far you can travel into town
          HghDis;       //How far you can travel on the highway
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    TwnDis=NumOGal*Town;
    HghDis=NumOGal*HghWay;
    //Output the transformed data
    cout<<"The number of miles traveled on a 20 gallon tank while driving in town is "<<TwnDis<<" miles."<<endl;
    cout<<"The number of miles traveled on a 20 gallon tank while driving on the highway is "<<HghDis<<" miles."<<endl;
    //Exit stage right!
    return 0;
}

