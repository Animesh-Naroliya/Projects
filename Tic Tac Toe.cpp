#include <iostream>
#include <cmath>
#include <ctime>

void drawBoard(char *space);
void playerMove(char *space , char player);
void computerMove(char *space , char computer);
bool checkWinner(char *space , char player , char computer);
bool checkTie(char *space);

int main()
{
    char space[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true ;

    drawBoard(space);

    while(running)
    {
        playerMove(space , player);
        drawBoard(space);

        if(checkWinner(space , player , computer))
        {
            running = false;
            break;
        }
        else if(checkTie(space))
        {
            running = false;
            break;
        }


        computerMove(space , computer); 
        drawBoard(space);

        if(checkWinner(space , player , computer))
        {
            running = false;
            break;
        }
        else if(checkTie(space))
        {
            running = false;
            break;
        }

    } 
    std::cout << "Thanks For Playing :) \n";
    
return 0;
}

void drawBoard(char *space)
{
    std::cout << "     |     |     " << '\n';
    std::cout << space[0] << "    |  " << space[1] << "  |  " << space[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << space[3] << "    |  " << space[4] << "  |  " << space[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << space[6] << "    |  " << space[7] << "  |  " << space[8] << "  " << '\n';
}
void playerMove(char *space , char player)
{
    int number;

    do
    {
        std::cout << "Enter a spot to place the 'X' (1-9): ";
        std::cin >> number;
        number--;

        if(space[number] == ' ')
        {
            space[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
    
}
void computerMove(char *space , char computer)
{
    int number ;
    srand(time(0));

    while(true)
    {
        number = rand() % 9;
        
        if(space[number == ' '])
        {
            space[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *space , char player , char computer)
{
    if((space[0] != ' ') && (space[0] == space[1]) && (space[1] == space[2]))
    {
        space[0] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[3] != ' ') && (space[3] == space[4]) && (space[4] == space[5]))
    {
        space[3] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }  
    else if((space[6] != ' ') && (space[6] == space[7]) && (space[7] == space[8]))
    {
        space[3] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[0] != ' ') && (space[0] == space[3]) && (space[3] == space[6]))
    {
        space[0] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[1] != ' ') && (space[1] == space[4]) && (space[4] == space[7]))
    {
        space[1] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[2] != ' ') && (space[2] == space[5]) && (space[5] == space[8]))
    {
        space[2] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[0] != ' ') && (space[0] == space[4]) && (space[4] == space[8]))
    {
        space[0] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else if((space[2] != ' ') && (space[2] == space[4]) && (space[4] == space[6]))
    {
        space[2] == player ? std::cout << "You WIN !\n" : std::cout << "You LOSE !\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool checkTie(char *space)
{
    for(int i = 0 ; i < 9 ; i++ )
    {
        if(space[i] == ' ')
        {
            std::cout << "It's A TIE ! \n";
            return false;
        }
    }
    return true;
}