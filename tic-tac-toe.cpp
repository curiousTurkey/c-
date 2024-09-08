#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X', computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
        cout << "Computer move: " << endl;
        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout << "Thanks for playing! See ya later";
    return 0;
}
void drawBoard(char *spaces){
    cout << endl;
    cout << "     |     |     " << endl ;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl ;
    cout << "_____|_____|_____" << endl ;
    cout << "     |     |     " << endl ;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl ;
    cout << "_____|_____|_____" << endl ;
    cout << "     |     |     " << endl ;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl ;
    cout << "     |     |     " << endl ;
    cout << endl;
}
void playerMove(char *spaces, char player){
    int number;
    do{
        cout << "Enter a spot to place a marker (1-9): " << endl;
        cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
        }

    }while((number < 0 || number > 8));
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
    
}
bool checkWinner(char *spaces, char player, char computer){
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])) {
        spaces[3] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout << "\nYou won the game" : cout << endl << "You lost the game";
    } else {
        return false;
    }
    return true;
}
bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << endl << "It's a TIE!, thanks for playing.";
    return true;
}