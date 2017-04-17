/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 15, 2017, 12:01 PM
 * Purpose:  Create a game of my choosing.
 */

//System Libraries
#include <iostream>  //Input - Output 
#include <cstdlib>   //Random number generator
#include <ctime>     //Set the random number seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
   
    //Declare variables
    float numPlay, response, numChip;
    float player1=3, player2=3, player3=3, pot;
    short dice1, dice2, dice3;
    char play;
    


    cout<<"Would you like to play?"<<endl;
    cout<<"Enter a Y  for yes or a N for no"<<endl;
    cin>>response;
    if(response=='Y')
    { 
    cout<<"You are playing Left, Center Right."<<endl;
    cout<<"The rules of this game are simple, you start out with three chips."
           " The goal of the game is to be the last person with any chips."
           "There are three dice that are used in the game which will decide"
            " whether you pass your chips to the center, the left or the right "       
    cout<<"This is a single player game in which you will play against two"
          " computer players."<<endl;
       
    }
    else{
        cout<<"Please exit the game"<<endl;
        }
    
    do{
    cout<<"It is your turn"<<endl;
    cout<<"You rolled the dice"<<endl;
    
    while(player1>=3)
        {
        dice1=rand()%6+1;//[1-6]
        if(dice1=1)
            player2++
            player1--;
        else if (dice1=2)
            player1--
            pot++;
        else if (dice1=3)
            player3++
            player1--;
        else 
            player1++
            player1--;


        dice2=rand()%6+1;//[1-6]
            if(dice2=1)
            player2++
            player1--;
        else if (dice2=2)
            player1--
            pot++;
        else if (dice2=3)
            player3++
            player1--;
        else 
            player1++
            player1--;

        dice3=rand()%6+1;//[1-6]
            if(dice3=1)
            player2++
            player1--;
        else if (dice3=2)
            player1--
            pot++;
        else if (dice3=3)
            player3++
            player1--;
        else 
            player1++
            player1--;
        }
    
    while(player1>=2)
        {
        dice1=rand()%6+1;//[1-6]
        if(dice1=1)
            player2++
            player1--;
        else if (dice1=2)
            player1--
            pot++;
        else if (dice1=3)
            player3++
            player1--;
        else 
            player1++
            player1--;


        dice2=rand()%6+1;//[1-6]
            if(dice2=1)
            player2++
            player1--;
        else if (dice2=2)
            player1--
            pot++;
        else if (dice2=3)
            player3++
            player1--;
        else 
            player1++
            player1--;
        }
    
        while(player1>=1)
        {
        dice1=rand()%6+1;//[1-6]
        if(dice1=1)
            player2++
            player1--;
        else if (dice1=2)
            player1--
            pot++;
        else if (dice1=3)
            player3++
            player1--;
        else 
            player1++
            player1--;
        }
    }while() 
    
    
    
    
    
    
    
    
    
    //Exit stage right!
    return 0;
}
