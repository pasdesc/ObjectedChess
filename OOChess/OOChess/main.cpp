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
        
        int * move_ptr=getMove(board->getTurn());
        int x1=(*move_ptr); //Defines x1 as the x-coordinate to move from
        int y1=(*(move_ptr+1)); //Defines y1 as the y-coordinate to move from
        int x2=(*(move_ptr+2)); //Defines x2 as the x-coordinate to move to
        int y2=(*(move_ptr+3)); //Defines y2 as the y-coordinate to move to
        
        
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
