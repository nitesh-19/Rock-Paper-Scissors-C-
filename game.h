//
// Created by Nitesh on 09-11-2023.
//

//TODO: Add score keeping and loop game.

#ifndef ROCK_PAPER_SCISSORS_GAME_H
#define ROCK_PAPER_SCISSORS_GAME_H

#endif //ROCK_PAPER_SCISSORS_GAME_H

#include <cstdlib>
#include <string>
#include <iostream>

using std::string;

class RPS {
private:
    short decision_matrix[9] = {2, 0, 1, 1, 2, 0, 0, 1, 2}; //Decision Matrix 3x3
    string move_options[4] = {"Rock", "Paper", "Scissors"};
    string possible_results[4] = {"You Lose", "You Win!", "It's a Draw"};
    char user_input_{};
    short index_row_modifier_{};
    int user_choice_int_{};

public:
    RPS();
    void start_game();
};

void RPS::start_game() {
    int random_int = std::rand() % 3;
    std::cout << "Choose Rock, Paper or Scissor (r/p/s):";
    std::cin >> user_input_;

    switch (user_input_) {
        case 'r' :
            index_row_modifier_ = 0;
            user_choice_int_ = 0;
            break;
        case 'p' :
            index_row_modifier_ = 3;
            user_choice_int_ = 1;
            break;
        case 's' :
            index_row_modifier_ = 6;
            user_choice_int_ = 2;
            break;
    }
    int result = decision_matrix[index_row_modifier_ + random_int];
    std::cout << "Your Choice: " << move_options[user_choice_int_] << "\n";
    std::cout << "Computer Chooses: " << move_options[random_int] << "\n";
    std::cout << possible_results[result] << "\n";


}

RPS::RPS() {
    std::cout << "****** ROCK PAPER SCISSORS ******" << std::endl;
}
