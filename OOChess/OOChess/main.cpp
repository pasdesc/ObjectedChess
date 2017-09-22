//
//  main.cpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/8/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//


#include "BoardStructure.hpp"
#include "PieceStructure.hpp"
#include "input.hpp"

int main(int argc, const char * argv[]) {
    std::string loserColor;
    std::string winnerColor;
    Board* board;
    board=new Board;
    while (true){
        
        short int * move_ptr=getMove(board->getTurn());
        
        board->movePiece(move_ptr);
        if (board->isGameOver()==true){  //Handles win-loss conditions.
            if(board->getWinner()==true){
                loserColor="Black";
                winnerColor="White";
            }
            else{
                loserColor="Black";
                winnerColor="White";
                
            }
            break;
            
        }
        
        board->switchTurn();
        
    }
    std::cout<<loserColor+" lost, and "+winnerColor+" won!!"<<std::endl;
    delete board;
    board=nullptr;
    return 0;
}
