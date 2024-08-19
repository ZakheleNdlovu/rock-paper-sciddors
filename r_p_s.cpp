#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    char player;

    int cplay = rand() % 3 + 1;
    cout << "*************************" << "\n";
    cout << "**ROCK  PAPER  SCISSORS**" << "\n";
    cout << "*************************" << "\n";
    cout << endl;
    cout << "(r) for Rock" << "\n";
    cout << "(p) for Paper" << "\n";
    cout << "(s) for Scissors" << "\n";

    while (true){
        cout << "Choose your letter: " << "\n: ";
        cin >> player;

        if (player == 'r'){
            if (cplay == 1){
                cout << "Player: Rock\nComputer: Rock\nIt's a tie!";
                break;
            }
            else if(cplay == 2){
                cout << "Player: Rock\nComputer: Paper\nYou loose!";
                break;
            }
            else if (cplay == 3){
                cout << "Player: Rock\nComputer: Scissors\nYou Win!";
                break;
            }
        }
        else if (player == 'p'){
            if (cplay == 1){
                cout << "Player: Paper\nComputer: Rock\nYou win!";
                break;
            }
            else if(cplay == 2){
                cout << "Player: Paper\nComputer: Paper\nIt's a tie!";
                break;
            }
            else if (cplay == 3){
                cout << "Player: Paper\nComputer: Scissors\nYou Loose!";
                break;
            }
        }
        else if (player == 's'){
            if (cplay == 1){
                cout << "Player: Scissors\nComputer: Rock\nYou loose!";
                break;
            }
            else if(cplay == 2){
                cout << "Player: Scissors\nComputer: Paper\nYou Win!";
                break;
            }
            else if (cplay == 3){
                cout << "Player: Scissors\nComputer: Scissors\nIt's a tie!";
                break;
            }
        }
        else{
            cout << "Please choose from one of the letters provided" << '\n';
        }

    }


    return 0;
}

