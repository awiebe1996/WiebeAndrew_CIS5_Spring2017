/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 2, 2017, 12:30 AM
 * Purpose:  Calculate the loan parameters
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include<cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//Percent conversion
const float CNVYRMN=12.0f;//Years to Month conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float consRec,//what the consumer receives $'s 
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
    mthPay=consRec/(1-intRate/PERCENT/CNVYRMN*nMonths);
    float i=intRate/CNVYRMN/PERCENT;
    float temp=pow((1+i), nMonths);
    mthPay=i*temp*consRec/(temp-1);
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}
