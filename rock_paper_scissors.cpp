#include<iostream>
#include<ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(void)
{
    char player, computer;
    cout << "\n\nLet's play Rock Papper and Scissor\n";
    cout <<"*************************************\n\n";
    player = getUserChoice();
    cout << "Your Choice: ";
    showChoice(player);
    computer = getComputerChoice();
    cout << "Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    do
    {
        cout << "Enter Your Choice(r for rock, p for paper and s for scissor): ";
        cin >>player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int choice = rand() % 3 + 1;
    switch (choice)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n"; 
        break;
    case 'p':
        cout <<"Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    if(player == 'r')
    {
        if(computer == 'r') cout <<"It's a draw.\n";
        else if (computer == 'p') cout <<"You lose.\n";
        else cout << "You Win.\n";
    }
    else if(player == 'p')
    {
        if(computer == 'r') cout <<"You win.\n";
        else if (computer == 'p') cout <<"It's a draw.\n";
        else cout << "You lose.\n";
    }
    else
    {
        if(computer == 'r') cout <<"You lose.\n";
        else if (computer == 'p') cout <<"You win.\n";
        else cout << "It's a draw.\n"; 
    }
}