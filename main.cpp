#include"board.hpp"
#include<iostream>

int main(){

    Board game;

    while(!game.check_game_ended()){
        int old_x, old_y, new_x, new_y;
        game.get_turn();
        for(auto& i: game){
            for(auto& j: i){
                std::cout << j << ' ';
            }
            std::cout << '\n';
        }
        std::cin >> old_x >> old_y >> new_x >> new_y;
        game.make_move(old_x, old_y, new_x, new_y);
        std::cout << game.board_eval() << '\n';
    }

    return 0;
}
