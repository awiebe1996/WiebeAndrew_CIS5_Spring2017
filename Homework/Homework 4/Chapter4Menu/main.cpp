/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 03, 2017, 3:00 PM
 * Purpose:  Menu to be utilized on Homework 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Set the random number seed
#include <iomanip>    //Formating
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSERTH=5.972e27f; //Mass of the earth in grams
const float GCONST=6.673e-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f;//conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of the earth in miles

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Celsius to Fahrenheit Problem"<<endl;
        cout<<"Type 2 for ACII Code Problem"<<endl;
        cout<<"Type 3 for Ocean Levels Problem"<<endl;
        cout<<"Type 4 for Calories Burned Problem "<<endl;
        cout<<"Type 5 for Membership Fees Increase Problem "<<endl;
        cout<<"Type 6 for Pennies For Pay Problem "<<endl;
        cout<<"Type 7 for Distance Traveled Problem"<<endl;
        cout<<"Type 8 for Check Weight Problem"<<endl;
        cout<<"Type 9 for Math Tutor Problem"<<endl<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Declare variables
    float fahr,  //Number of degrees in Fahrenheit 
          cels=1.0f; //Number of degrees in Celsius
    
    do{
    
    fahr=((9.0f/5.0f)*cels)+32;   //Conversion from Celsius to Fahrenheit
    cout<<cels<<" degrees in Celsius is equal to "
        <<fahr<<" degrees Fahrenheit."<<endl;
    cels++;                       //The increment for Celsius

    }while(cels<21);
                break;
            }
            case '2':{
                 //Map inputs to outputs or process the data
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
                break;
            }
            case '3':{
                //Declare variables
    float millYr=1.5f;//The number of millimeters risen each year
    float years=1.0f; //The number of years starting at 1
    float total;      //The amount that has risen within a certain amount of years
        do{
        
     total=(years*millYr); 
     cout<<"The ocean has risen "<<total<<" millimeters in the past "
             <<years<<" year/s."<<endl<<endl;
     years++;   //an increment of one adding to the years
     
           }while(years<=25);//do this while years is less than or equal to 25
                break;
            }
            case '4':{
               //Declare variables
    float minute=3.6f;  //How many calories burned in 1 minute
    float total;        //how many calories are burned in five minutes
    float cycle=1.0f;   //how many times that you worked out for five minutes
    float time=1.0f;    //1 minute
    float times;        //minutes * 5    
    //Initialize variables
    do{

        total=((minute*5)*cycle);   //calculating the amount of calories 
        times=(5*time);             //Calculating the times
        cout<<"For every "<<times<<" minutes, you have burned "<<total<<" calories."<<endl;
        time++;                     //increment
        cycle++;                    //increment
    }while(times<=30);
                break;
            }
            case '5':{
               //Declare variables
    float membfee=2500.0f;  //the starting membership fee
    float percnt=0.04f;     //the percent that will increase each year
    float sixyear=6;        //the sixth year of membership
    float year=1;           //The first year of membership
    float amount;           //the amount of money that needs to be paid in $
    
    //Initialize variables
    
    //Input data
    do{
        amount=((membfee*(percnt*year))+membfee);//Finding the amount needed to pay
        cout<<"The membership will cost "<<amount<<"$ for "<<year<<" year/s of membership."<<endl;    
        year++; //Year increment
    }while(year<=sixyear);
                break;
            }
            case '6':{
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
        cout<<"You have made 1 cent on the first day."<<endl;    
   
    while(day<=days-1){
        penny = penny*2;//squaring the pennies
        cout<<"You have made "<<penny/100<<"$ on the "<<day+1<<" day."<<endl;
        day++;          //days increment
        total+=penny;   //calculating the total
    }
    
    cout<<"Your total pay was "<<(total+1)/100<<"$"<<endl;
                break;
            }
            case '7':{
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
                break;
            }
            case '8':{
                //Declare variables
    float myWeight;//Result in lbs
    float myMass=6;//Units of slugs
    
    //Map inputs to outputs or process the data
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RADERTH*RADERTH*CNVMFT*CNVMFT);
    
    //Output the transformed data
    cout<<"You weigh "<<myWeight<<" lbs"<<endl;
                break;
            }
            case '9':{
                //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int op1,op2,result,answer;
    char choice;
    
    //Input Data
    do{
        cout<<"Math Tutor"<<endl;
        cout<<"Choose the operation * / + - or anything else to exit"<<endl;
        cin>>choice;
        cout<<endl<<endl;
        if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*'))
        {
            cout<<"Exit the Math tutor"<<endl;
        }

        //Map inputs to outputs or process the data
        switch(choice){
            case '+':{
                op1=rand()%900+100;//[100-999]
                op2=rand()%900+100;//[100-999]
                answer=op1+op2;//[3 to 4 digit result]
                break;
            }
            case '-':{
                 op1=rand()%900+100;//[100-999]
                op2=rand()%900+100;//[100-999]
                answer=op1-op2;//[0 to 3 digit result]
                break;
            }
            case '*':{
                op1=rand()%90+10;//[10-99]
                op2=rand()%90+10;//[10-99]
                answer=op1*op2;//[2 to 4 digit result]
                break;
            }
            case '/':{
                answer=rand()%90+10;//[10-99]
                op2=rand()%90+10;//[10-99]
                op1=answer*op2;//[2 to 3 digit result]
                break;
            }
            default:{
                cout<<"Bad Operator"<<endl;
                return 1;
            }
        }

        //Output the transformed data
        cout<<setw(8)<<op1<<endl;
        cout<<choice<<setw(7)<<op2<<endl;
        cout<<"--------"<<endl;
        cin>>result;

        //Compare the answer
        cout<<endl;
        cout<<((result==answer)?"Correct":"Incorrect")<<endl;
        cout<<"The answer = "<<answer<<endl<<endl;
    }while(choice=='+'||choice=='-'||choice=='/'||choice=='*');
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}