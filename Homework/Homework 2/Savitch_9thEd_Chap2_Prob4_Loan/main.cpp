/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 2, 2017, 11:55 AM
 * Purpose:  Calculate the loan parameters
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//Percent conversion
const float CNVYRMN=12.0f;//Years to Month conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float faceVal,//Loan face value $'s
          consRec,//what the consumer receives $'s 
          mthPay;//Monthly Payment $'s
    int   intRate,//Yearly percentage interest rate
          nMonths;//Number of months in the loan
    
    //Input data
    cout<<"this program calculates Loan Parameters"<<endl;
    cout<<"Input the Loan Amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest Rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    faceVal=consRec/(1-intRate/PERCENT/CNVYRMN*nMonths);
    mthPay=faceVal/nMonths;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face value of the loan = $"<<faceVal<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}

