#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char playerChoice, char computerChoice);

int main(){
    char player, computer;

    player = getUserChoice();
    computer = getComputerChoice();
    showChoice(player);
    chooseWinner(player, computer);
    return 0;
}

char getUserChoice(){
    char player;
    do{
    cout << "\n***************Rock Paper Scissor*********************\n";
    cout << "\nEnter your choice: "; 
    cout << "\nr: rock";
    cout << "\np: paper";
    cout << "\ns: scissor";
    cin >> player;
    } while (player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S');
    return player;
}
char getComputerChoice(){
    char computer;
    srand(time(0));
    int randomChoice = (rand() % 3) + 1;
    switch (randomChoice)
    {
    case 1:
        return 'r';
    case 2: 
        return 'p';
    case 3: 
        return 's';
    default:
        break;
    }
    return 0;
}
void showChoice(char choice){
    cout << "\nPlayer chose : " << choice;
}
void chooseWinner(char playerChoice, char computerChoice){
    if((playerChoice == 'r' || playerChoice == 'R') && computerChoice == 's'){
        cout << "\nPlayer won. Computer chose : " << computerChoice ; 
    } else if((playerChoice == 'p' || playerChoice == 'P') && computerChoice == 'r'){
        cout << "\nPlayer won. Computer chose : " << computerChoice;
    } else if((playerChoice == 's' || playerChoice == 'S') && computerChoice == 'p'){
        cout << "\nPlayer won. Computer chose : " << computerChoice;
    } else if ((tolower(playerChoice) == computerChoice)){
        cout << "\nIt's a tie. Computer chose : " << computerChoice;
    } else {
        cout << "\nComputer won!. Computer chose " << computerChoice;
    }
}