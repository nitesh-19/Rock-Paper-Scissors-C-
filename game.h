//
// Created by Nitesh on 09-11-2023.
//

#ifndef ROCK_PAPER_SCISSORS_GAME_H
#define ROCK_PAPER_SCISSORS_GAME_H

#endif //ROCK_PAPER_SCISSORS_GAME_H

#include <cstdlib>
#include <string>
#include <iostream>

using std::string;

class RPS {
private:
    short array[9] = {-1, 0, 1, 1, -1, 0, 0, 1, -1}; //Decision Matrix 3x3
    string tools[4] = {"Rock", "Paper", "Scissors"};
    char user_input;
    short index_row_modifier;


public:
    void start_game();
};

void RPS::start_game() {
    int random_int = std::rand() % 3;
    std::cin >> user_input;

    switch (user_input) {
        case 'r' :
            index_row_modifier = 0;
            break;
        case 'p' :
            index_row_modifier = 3;
            break;
        case 's' :
            index_row_modifier = 6;
            break;
    }
    int result = array[index_row_modifier + random_int];
    std::cout << "Computer Choice " << random_int << "\n";
    std::cout << "Result " << result << "\n";


}