/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 12:20 AM
 * Purpose:  Find the test average from five inputs
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float score1,//Test score number 1
          score2,//Test score number 2
          score3,//Test score number 3
          score4,//Test score number 4
          score5,//Test score number 5
          Avg;   //Test score average
    
    //Initialize variables
    
    //Input data
    cout<<"Enter score number 1"<<endl;
        cin>>score1;                    //Test score number 1
    cout<<"Enter score number 2"<<endl;
        cin>>score2;                    //Test score number 2
    cout<<"Enter score number 3"<<endl;
        cin>>score3;                    //Test score number 3
    cout<<"Enter score number 4"<<endl;
        cin>>score4;                    //Test score number 4
    cout<<"Enter score number 5"<<endl;
        cin>>score5;                    //Test score number 5
    
    //Map inputs to outputs or process the data
    Avg=(score1 + score2 + score3 + score4 + score5) / 5.0f;    //Average calculation
    //Output the transformed data
    cout<<fixed<<setprecision(1);
    cout<<"The average of the scores is equal to "<<Avg<<endl;
    
    //Exit stage right!
    return 0;
}

