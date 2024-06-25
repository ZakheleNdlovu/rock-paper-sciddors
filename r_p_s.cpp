#include <iostream>
#include <cmath>
#include <ctime>



int main(){
    srand(time(0));
    char player;

    int cplay = rand() % 3 + 1;
    std::cout << "*************************" << "\n";
    std::cout << "**ROCK  PAPER  SCISSORS**" << "\n";
    std::cout << "*************************" << "\n";
    std::cout << std::endl;
    std::cout << "(r) for Rock" << "\n";
    std::cout << "(p) for Paper" << "\n";
    std::cout << "(s) for Scissors" << "\n";

    while (true){
        std::cout << "Choose your letter: " << "\n: ";
        std::cin >> player;

        if (player == 'r'){
            if (cplay == 1){
                std::cout << "Player: Rock\nComputer: Rock\nIt's a tie!";
                break;
            }
            else if(cplay == 2){
                std::cout << "Player: Rock\nComputer: Paper\nYou loose!";
                break;
            }
            else if (cplay == 3){
                std::cout << "Player: Rock\nComputer: Scissors\nYou Win!";
                break;
            }
        }
        else if (player == 'p'){
            if (cplay == 1){
                std::cout << "Player: Paper\nComputer: Rock\nYou win!";
                break;
            }
            else if(cplay == 2){
                std::cout << "Player: Paper\nComputer: Paper\nIt's a tie!";
                break;
            }
            else if (cplay == 3){
                std::cout << "Player: Paper\nComputer: Scissors\nYou Loose!";
                break;
            }
        }
        else if (player == 's'){
            if (cplay == 1){
                std::cout << "Player: Scissors\nComputer: Rock\nYou loose!";
                break;
            }
            else if(cplay == 2){
                std::cout << "Player: Scissors\nComputer: Paper\nYou Win!";
                break;
            }
            else if (cplay == 3){
                std::cout << "Player: Scissors\nComputer: Scissors\nIt's a tie!";
                break;
            }
        }
        else{
            std::cout << "Please choose from one of the letters provided" << '\n';
        }

    }


    return 0;
}

