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
    string possible_results[4] = {"---You lost the round---", "---You won the round!---", "---It's a Draw---"};
    char user_input_{};
    short index_row_modifier_{};
    int user_choice_int_{};

public:
    RPS();

    void play_game();
};

void RPS::play_game() {
    int i = 0;
    bool quit = false;
    int result_history[3] = {-1, -1, -1};
    while (i < 3 and !quit) {
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
            case 'q':
                quit = true;
                break;
        }
        if (user_input_ == 'q') {
            break;
        }
        int result = decision_matrix[index_row_modifier_ + random_int];
        std::cout << "Your Choice: " << move_options[user_choice_int_] << "\n";
        std::cout << "Computer Chooses: " << move_options[random_int] << "\n";
        std::cout << possible_results[result] << "\n";
        if (result == 2) {
            continue;
        }
        result_history[i] = result;
        i += 1;

    }

    if (result_history[2] != -1) {
        int count = 0;
        for (int k: result_history) {
            if (k == 1) {
                count++;
            }
        }
        std::cout << "Your total score is " << count << "/3" << std::endl;
        if (count >= 2) {
            std::cout << "YOU WON THE GAME!" << std::endl;
        } else
            std::cout << "YOU LOST THE GAME!" << std::endl;
    } else std::cout << "You abandoned the game!" << std::endl;


}

RPS::RPS() {
    std::cout << "****** ROCK PAPER SCISSORS ******" << std::endl;
}


