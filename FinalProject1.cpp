#include <iostream>
#include <cstdlib>
#include <unistd.h>

const int table_width = 7;
const int table_height = 6;
int C4B[table_width][table_height];
int choice, player;
bool end = false;
int a=0;

//take turns dropping pieces using valid inputs 
void check(int x)
{
    if(C4B[x-1][a]!=0 && a<table_height){
        a++;
        check(x);
    }   
    else if (player==1 && a<table_height){
        C4B[x-1][a]=1;
        a=0;
    }
    else if (player==2 && a<table_height){
        C4B[x-1][a]=2;
        a=0;
    }
    else{
        std::cout << "Invalid input, please try again." << std::endl;
        a=0;
        player++;
    }
}

//creates and rewrites two boards after every input by each user
int draw()
{
    system("clear");
    for(int i = 0; i<9; i++)
    {
        if(i<2){
            std::cout<<"-";
        } else if(i>table_width) {
            std::cout<<i-1<<"--"<<std::endl;
        } else {
            std::cout<<i-1<<"----";
        }
    }
    for(int i = 0; i<table_height; i++){
        for(int j = 0; j<table_width; j++){
            if(C4B[j][i]!=0){
                if(C4B[j][i]==1){
                std::cout<<"| X |";
                }
                else std::cout<<"| O |";
            }
            else std::cout<<"|   |";
        } std::cout<<std::endl;
    }
    for(int i = 0; i<35; i++){
        std::cout<<"=";
    } std::cout<<std::endl;
}

//checks if a win condition has been met after each iteration of the board is created
int win_check()
{
    for(int i = 0; i<table_height; i++)
    {
        for(int j = 0; j<table_width; j++)
        {
        if(C4B[j][i]==1 && C4B[j+1][i+1]==1 && C4B[j+2][i+2]==1 && C4B[j+3][i+3]==1){
            end = true;
            std::cout << "\nPlayer 1 wins!" << std::endl;
            }
        if(C4B[j][i]==1 && C4B[j+1][i-1]==1 && C4B[j+2][i-2]==1 && C4B[j+3][i-3]==1){
            std::cout << "\nPlayer 1 wins!" << std::endl;
            end = true;
            }
        if(C4B[j][i]==2 && C4B[j+1][i-1]==2 && C4B[j+2][i-2]==2 && C4B[j+3][i-3]==2){
            std::cout << "\nPlayer 2 wins!" << std::endl;
            end=true;
            }
        else if(C4B[j][i]==2 && C4B[j-1][i-1]==2 && C4B[j-2][i-2]==2 && C4B[j-3][i-3]==2){
            end = true;
            std::cout << "\nPlayer 2 wins!" << std::endl;
            }
        else if(C4B[j][i]==1 && C4B[j][i-1]==1 && C4B[j][i-2]==1 && C4B[j][i-3]==1){
            std::cout << "\nPlayer 1 wins!" << std::endl;
            end = true;
            }
        else if(C4B[j][i]==1 && C4B[j-1][i]==1 && C4B[j-2][i]==1 && C4B[j-3][i]==1){
            std::cout << "\nPlayer 1 wins!" << std::endl;
            end = true;
            }
        else if(C4B[j][i]==2 && C4B[j][i-1]==2 && C4B[j][i-2]==2 && C4B[j][i-3]==2){
            std::cout << "\nPlayer 2 wins!" << std::endl;
            end = true;
            }
        else if(C4B[j][i]==2 && C4B[j-1][i]==2 && C4B[j-2][i]==2 && C4B[j-3][i]==2){
            std::cout << "\nPlayer 2 wins!" << std::endl;
            end = true;
            }
        }
    }
}

//take turns for players to choose where to drop a piece 
int p_choice()
{
    player = 1;
    while(end!=true){
    std::cout << "Player " << player << ": ";
    std::cin >> choice;
        if (choice>0 && choice<8){
            check(choice);
            draw();
            if (player == 1){
                player++;
            }
            else{
                player--;
            }
        }
        else{
            std::cout << "Invalid selection, please try again" << std::endl;
        }
    win_check();
    }
}

//initial startup
int main()
{
    //string input;
    std::cout<<"Welcome to Connect 4"<<std::endl;
    /*std::cout << "Do you know how to play? (enter y/n)" <<std::endl;
    std::cin >> input;
    if (input == 'n'){
        break;
    }else {
       std::cout << "The rules are simple. There are two players taking turns,\n" << "if it is your turn"
    }
    */
    sleep(1);
    draw();
    p_choice();
    return 0;
}