/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on March 6, 2017, 11:20 AM
 * Purpose:  Make the Word Game
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
  string name,
         namOCty,
         namOCol,
         profesn,
         animal,
         petNam; 
    int age;
    //Initialize variables
    
    //Input data
    cout<<"Input Name "<<endl;
        cin>>name;
    cout<<"Input Age "<<endl;
        cin>>age;
        cin.ignore();
    cout<<"Input the name of a city "<<endl;
        cin>>namOCty;
    cout<<"Input the name of a college "<<endl;
        cin>>namOCol;
    cout<<"Input the name of a profession "<<endl;       
        cin>>profesn;
    cout<<"Input a type of animal "<<endl;        
        cin>>animal;
    cout<<"Input a pet name "<<endl;
        cin>>petNam;
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"There once was a person named "<<name<<" who lived in "<<namOCty<<
          ". At the age of "<<age<<", "<<name<<" went to college at "<<namOCol<<". "<<name<<
          " graduated and went to work as a "<<profesn<<". Then, "<<name<<" adopted a(n) "<<
          animal<<" named "<<petNam<<". They both lived happily ever after!"<<endl;  
    //Exit stage right!
    return 0;
}

