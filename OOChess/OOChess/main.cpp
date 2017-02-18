//
//  main.cpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/8/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#include <iostream>
#include "BoardStructure.hpp"
#include "PieceStructure.hpp"


int main(int argc, const char * argv[]) {
    std::string loserColor;
    std::string winnerColor;
    enum class winloss{
        White,
        Black,
    } loser,winner;
    Board* board;
    board=new Board;
    while (true){
        
        
        if (board->isGameOver()==true){
            if(board->getWinner()==true){
                loser=winloss::Black;
                winner=winloss::White;
            }
            else{
                loser=winloss::White;
                winner=winloss::Black;
                
            }
            break;
            
        }
        
        board->switchTurn();
        
    }
    switch (loser) {
        case winloss::White:
            loserColor="White";
            break;
        case winloss::Black:
            loserColor="Black";
        default:
            break;
    }
    switch (winner) {
        case winloss::White:
            winnerColor="White";
            break;
        case winloss::Black:
            winnerColor="Black";
        default:
            break;
    }
    
    std::cout<<loserColor+" lost, and "+loserColor+"won!!"<<std::endl;
    delete board;
    board=nullptr;
    
    
    
    return 0;
}
