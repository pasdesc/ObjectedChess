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
    Board* board;
    board=new Board;
    while (true){
        
        
        if (board->isGameOver()==true){
            break;
        }
        board->switchTurn();
    }
    std::cout<<"You lost, and you won!!"<<std::endl;
    delete board;
    board=nullptr;
    
    
    
    return 0;
}
