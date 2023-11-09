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
    char array[4] = "RPS";
    char user_input;
    short game_matrix[];

public:
    void start_game();

};

void RPS::start_game() {
    int random_int = std::rand() % 3;
    std::cin >> user_input;
    if(user_input == )


}