/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 11:20 AM
 * Purpose:  calculate the monthly and annual expenses for a car
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
    float loanPy,   //how much you pay for your car loan in a month
          insrnce,  //how much you pay for insurance in a month
          gas,      //how much you pay for gas in a month
          oil,      //how much you pay for oil in a month
          tires,    //how much you pay for tires in a month
          maint,    //how much you pay for maintenance in a month
          mnthly,   //how much you pay for your car monthly
          yrly;     //how much you pay for your can annually
    //Initialize variables
    
    //Input data
    cout<<"How much a month do you spend on your car's loan payment?"<<endl;
    cin>>loanPy;
    cout<<"How much a month do you spend for your car's insurance?"<<endl;
    cin>>insrnce;
    cout<<"How much a month do you spend on gas?"<<endl;
    cin>>gas;
    cout<<"How much a month do you spend on oil?"<<endl;
    cin>>oil;
    cout<<"How much a month do you spend on tires for your car?"<<endl;
    cin>>tires;
    cout<<"How much a month do you spend on vehicle maintenance?"<<endl;
    cin>>maint;
    
    //Map inputs to outputs or process the data
    mnthly=loanPy+insrnce+gas+oil+tires+maint;
    yrly=mnthly*12;
    
    //Output the transformed data
    cout<<"You pay "<<mnthly<<"$ monthly on your car"<<endl;
    cout<<"You pay "<<yrly<<"$ annually on your car"<<endl;
    
    //Exit stage right!
    return 0;
}

