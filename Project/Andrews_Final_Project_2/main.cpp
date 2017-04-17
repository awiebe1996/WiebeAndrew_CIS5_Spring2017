/* 
 * File:   main.cpp
 * Author: Andrew Wiebe
 * Created on April 15, 2017, 12:01 PM
 * Purpose:  Create a game of my choosing, which is Left Center Right.
 */

//System Libraries
#include <iostream>  //Input - Output 
#include <cstdlib>   //Random number generator
#include <ctime>     //Set the random number seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

void incPot( short &pot){
    if (pot+1 < 10) pot++;
    else{
        cout<<"Too high"<<endl;
        exit(0);
    }
}
//Execution begins here

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));//Used to generate random numbers

    //Declare variables
    short player1 = 3, player2 = 3, player3 = 3, pot=0;//Amount of chips everyone has
    short dice1, dice2, dice3;//The three dice that are used
    short next;//Used when prompting the user to go to the next turn
    char rsponse;//ask the user if he or she wants to play
    bool isGood;//Used when prompting the user to go to the next turn
    float turns=0;//how many turns you have done
    int phases=0;//how many turns of three have gone by


    cout << "Would you like to play?" << endl;
    cout << "Enter a Y  for yes or a N for no" << endl;
    cin>>rsponse;
    if (rsponse == 'Y' || rsponse=='y') {
        cout << "You are playing Left, Center Right." << endl;
        cout << "The rules of this game are simple, you start out with three chips." << endl <<
                "The goal of the game is to be the last person with any chips." << endl <<
                "There are three dice that are used in the game which will decide" << endl <<
                "whether you pass your chips to the center, the left or the right." << endl << endl;

        cout << "This is a single player game in which you will play against two computer players." << endl << endl;

    } else {
        cout << "Please exit the game" << endl;
        exit(0);
    }
    
    do{
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"You have "<<player1<<" chip/s right now."<<endl;
        cout<<"Player 2 has "<<player2<<" chip/s right now."<<endl;
        cout<<"Player 3 has "<<player3<<" chip/s right now."<<endl;
        cout<<"There is/are "<<pot<<" chips in the center right now."<<endl<<endl;

    if (player2 >= 1 || player3 >= 1) { //do this if other players have chips left
        cout<<"---------------------------------------------------------"<<endl;
        cout << "It is your turn" << endl; //explanation to the user
        cout<<"You have "<<player1<<" chip/s right now."<<endl;
        cout << "You rolled the dice" << endl; //explanation to the user
        turns++;

        if (player1 >= 3) //If player has three chips, then do this
      {
//              printInfo(player1, player2, player3, pot);
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "You rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl;
            } //explanation to the user
//printInfo(player1, player2, player3, pot);
            dice2 = rand() % 6 + 1; //[1-6]
            cout << "You rolled a " << dice2 << endl; //Showing what number was rolled

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl;
            } //explanation to the user
//printInfo(player1, player2, player3, pot);
            dice3 = rand() % 6 + 1; //[1-6] 
            cout << "You rolled a " << dice3 << endl; //Showing what number was rolled

            if (dice3 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl;
            } //explanation to the user
        } else if (player1 == 2) //If player has two chips, then do this
        {
//            printInfo(player1, player2, player3, pot);
            dice1 = rand() % 6 + 1; //[1-6]
                cout << "You rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl;
            } //explanation to the user

//                printInfo(player1, player2, player3, pot);
            dice2 = rand() % 6 + 1; //[1-6]

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl;
            } //explanation to the user
        } else if (player1 == 1) //If player has one chip, then do this
        {
//            printInfo(player1, player2, player3, pot);
            dice1 = rand() % 6 + 1; //[1-6]


            if (dice1 == 1) { //if dice lands on a 1, then do this
                player2++, player1--; //decrement and increment
                cout << "You gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player1--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "You gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player3++, player1--; //decrement and increment
                cout << "You gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player1++, player1--; //decrement and increment
                cout << "You kept your chip" << endl<<endl; //explanation to the user
            }
        }else{ 
            cout<<"You have no more chips, please wait"<<endl<<endl;
             }

    } else {
        cout << "Congrats, you won the game in "<<turns<<" turns and "<<phases*3<<" phases!"<<endl; //explanation to the user
        exit(0); //Exit the program
    }
        
    cout << "It is now the end of your turn" << endl<<endl; //explanation to the user
    
    cout << "You now have " << player1 << " chips" << endl<<endl; //how many chips you now have

    cout<<"Please type in anything to go to the next person"<<endl<<endl;
    cin>>next;

    isGood = cin.good(); //if this is false, they either entered a string, or too big a number

    if ( !isGood ){
        cin.clear(); //clear the flags (not the buffer))
        cin.ignore(1000, '\n');
    }
    
    if (player1 >= 1 || player3 >= 1) { //do this if other players have chips left
        cout<<"---------------------------------------------------------"<<endl;
        cout << "It is now player two's turn" << endl; //explanation to the user
        cout<<"Player 2 has "<<player2<<" chip/s right now."<<endl;
        cout << "player two rolled the dice" << endl; //explanation to the user

        if (player2 >= 3) //If player has three chips, then do this
        {
//            printInfo(player1, player2, player3, pot);
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player two rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept his chip" << endl<<endl;
            } //explanation to the user

            dice2 = rand() % 6 + 1; //[1-6]
            cout << "player two rolled a " << dice2 << endl; //Showing what number was rolled

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept his chip" << endl<<endl;
            } //explanation to the user

            dice3 = rand() % 6 + 1; //[1-6] 
            cout << "player two rolled a " << dice3 << endl; //Showing what number was rolled

            if (dice3 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept your chip" << endl<<endl;
            } //explanation to the user
        } else if (player2 == 2) //If player has two chips, then do this
        {
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player two rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept his chip" << endl<<endl;
            } //explanation to the user

            dice2 = rand() % 6 + 1; //[1-6]
            cout << "player two rolled a " << dice2 << endl; //Showing what number was rolled

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept his chip" << endl<<endl;
            } //explanation to the user
        } else if (player2 == 1) //If player has one chip, then do this
        {
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player two rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player3++, player2--; //decrement and increment
                cout << "player two gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player2--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player two gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player1++, player2--; //decrement and increment
                cout << "player two gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player2++, player2--; //decrement and increment
                cout << "player two kept his chip" << endl; //explanation to the user
            }
        }else{ 
            cout<<"player two has no more chips, please wait"<<endl<<endl;
             }

    } else {
        cout << "sorry, player two won the game" << endl<<endl; //explanation to the user
        exit(0); //Exit the program
    }

    cout << "It is now the end of player two's turn" << endl<<endl; //explanation to the user
    
    cout << "player two now has " << player2 << " chips" << endl<<endl; //how many chips you now have

    cout<<"Please type in anything to go to the next person"<<endl<<endl;
    cin>>next;

         isGood = cin.good(); //if this is false, they either entered a string, or too big a number

    if ( !isGood ){
        cin.clear(); //clear the flags (not the buffer))
        cin.ignore(1000, '\n');
    }
    
    
    
    
        if (player1 >= 1 || player2 >= 1) { //do this if other players have chips left
        cout<<"---------------------------------------------------------"<<endl;
        cout << "It is now player three's turn" << endl; //explanation to the user
        cout<<"Player 3 has "<<player3<<" chip/s right now."<<endl;
        cout << "player three two rolled the dice" << endl; //explanation to the user

        if (player3 >= 3) //If player has three chips, then do this
        {
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player three rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept his chip" << endl<<endl;
            } //explanation to the user
            dice2 = rand() % 6 + 1; //[1-6]
            cout << "player three rolled a " << dice2 << endl; //Showing what number was rolled

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept his chip" << endl<<endl;
            } //explanation to the user
            dice3 = rand() % 6 + 1; //[1-6] 
            cout << "player three rolled a " << dice3 << endl; //Showing what number was rolled

            if (dice3 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice3 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept your chip" << endl<<endl;
            } //explanation to the user
        } else if (player3 == 2) //If player has two chips, then do this
        {
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player three rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept his chip" << endl<<endl;
            } //explanation to the user
            dice2 = rand() % 6 + 1; //[1-6]
            cout << "player three rolled a " << dice2 << endl; //Showing what number was rolled

            if (dice2 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                   incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice2 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept his chip" << endl<<endl;
            } //explanation to the user
            
        } else if (player3 == 1) //If player has one chip, then do this
        {
            dice1 = rand() % 6 + 1; //[1-6]
            cout << "player three rolled a " << dice1 << endl; //Showing what number was rolled

            if (dice1 == 1) { //if dice lands on a 1, then do this
                player1++, player3--; //decrement and increment
                cout << "player three gave one chip to the left" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 2) { //if dice lands on a 2, then do this
                player3--;// pot++; //decrement and increment
                    incPot(pot);
                cout << "player three gave one chip to the center pot" << endl<<endl;
            }//explanation to the user

            else if (dice1 == 3) { //if dice lands on a 3, then do this
                player2++, player3--; //decrement and increment
                cout << "player three gave one chip to the right" << endl<<endl;
            }//explanation to the user

            else { //if dice lands on anything else, then do this
                player3++, player3--; //decrement and increment
                cout << "player three kept his chip" << endl<<endl;
            } //explanation to the user
            
        }else{ 
            cout<<"player three has no more chips, please wait"<<endl<<endl;
             }

    } else {
        cout << "sorry, player three won the game" << endl<<endl; //explanation to the user
        exit(0); //Exit the program
    }

    cout << "It is now the end of player three's turn" << endl<<endl; //explanation to the user
    
    cout << "player three now has " << player3 << " chips" << endl<<endl; //how many chips you now have

    cout<<"Please type in anything to go to the next person"<<endl<<endl;
    cin>>next;
    
         isGood = cin.good(); //if this is false, they either entered a string, or too big a number

    if ( !isGood ){
        cin.clear(); //clear the flags (not the buffer))
        cin.ignore(1000, '\n');
    }
    
         phases++;
         
    }while(player1>=1||player2>=1||player3>=1);

    //Exit stage right!
    return 0;
}
