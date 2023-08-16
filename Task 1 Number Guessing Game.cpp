#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

 int main()
 {
    cout<<"WELCOME!!!\n";
    cout<<"Number Guessing Game!!\n";
    cout<<"INSTRUCTIONS\n";
    cout<<"Instruction 1: You have to choose number between 1 to 1000\n";
    cout<<"Instruction 2: Choose the level you want to play\n";
    cout<<"CHOOSE THE LEVEL...\n";
    cout<<"Level 1: Easy! press 1\n";
    cout<<"Level 2: Medium!! press 2\n";
    cout<<"Level 3: Hard!!! press 3\n";
    
   int level;
   cout<<"Enter the level number:\n";
   cin>>level;

   srand(time(0));
   int randomNumber = (rand() % (100-1))+1;
   int guess;

   if(level== 1)
   {
    cout<<"You have 10 chance to choose a number\n";
    int chance,number;
    chance == 10;
    for(int i = 1; i<=10; i++)
    {
        cout<<"Enter the number:\n";
        cin>>guess;
        if(guess == randomNumber)
        {
            cout<<"HURRRYYYY!!! you guest the right number\n";
            break;
        }else if (guess > randomNumber){
            cout<<guess<<"is high than the number\n";
        }
        else{
            cout<<guess<<"is low than the number\n";
        }
    if(chance ==0){
    cout<<"Better luck next time!\n";
        
    }        
    }
        
    }

    if(level ==2)
    {
    cout<<"You have 10 chance to choose a number\n";
    int chance,number;
    chance == 5;
    for(int i = 1; i<=5; i++)
    {
        cout<<"Enter the number:\n";
        cin>>guess;
        if(guess == randomNumber)
        {
            cout<<"HURRRYYYY!!! you guest the right number";
            break;
        }else if (guess > randomNumber){
            cout<<guess<<"is high than the number\n";
        }
        else{
            cout<<guess<<"is low than the number\n";
        }
        if(chance ==0){
        cout<<"Better luck next time!\n";    
    }
        
    }

    if(level ==3)
    {
    cout<<"You have 3 chance to choose a number\n";
    int chance,number;
    chance == 3;
    for(int i = 1; i<=3; i++)
    {
        cout<<"Enter the number:\n";
        cin>>guess;
        if(guess == randomNumber)
        {
            cout<<"HURRRYYYY!!! you guest the right number\n";
            break;
        }else if (guess > randomNumber){
            cout<<guess<<"is high than the number\n";
        }
        else{
            cout<<guess<<"is low than the number\n";
        }
        if(chance == 0){
        cout<<"Better luck next time!\n";    
    }
        
    }
    }
    } 

    cout<<"Thanks for playing this game!!!\n";  

 }
    
   
    

    

   
    

    
    
   
    

    

   
    

    