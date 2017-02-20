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
    enum class winloss{
        White,
        Black,
    } loser,winner;
    Board* board;
    board=new Board;
    while (true){
        
        int * move_ptr=getMove(board->getTurn());
        int x1=(*move_ptr); //Defines x1 as the x-coordinate to move from
        int y1=(*(move_ptr+1)); //Defines y1 as the y-coordinate to move from
        int x2=(*(move_ptr+2)); //Defines x2 as the x-coordinate to move to
        int y2=(*(move_ptr+3)); //Defines y2 as the y-coordinate to move to
        
        
        
        
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
    
    std::cout<<loserColor+" lost, and "+winnerColor+" won!!"<<std::endl;
    delete board;
    board=nullptr;
    
    
    
    return 0;
}
