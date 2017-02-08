//
//  BoardStructure.hpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/8/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#ifndef BoardStructure_hpp
#define BoardStructure_hpp
#include <stdio.h>
class Board{
    public:
        Board();
        ~Board();
        Board(const Board &copy);
        Board operator=(const Board &copy);
        bool inline getTurn();
        void movePiece(short int x1, short int y1, short int x2, short int y2);
        void inline switchTurn();
};
#endif /* BoardStructure_hpp */
