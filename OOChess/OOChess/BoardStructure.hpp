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
class piece;
class Board{
    public:
        Board(); //Constructor
        virtual ~Board(); //Destructor
        Board(const Board &copy); // Copy Constructor
        virtual Board operator=(const Board &copy); //Assignment operator
        virtual bool inline getTurn(); //Check whose turn it is
        virtual void movePiece(short int x1, short int y1, short int x2, short int y2); //Move a piece from (x1,y1) to (x2,y2)
        virtual void inline switchTurn(); //Switch the turn
        virtual void capturePiece(int x,int y); //Move a piece to the captured zone off of the board
        virtual int score(const Board &scored); //Score a board
    private:
        piece** mainBoard[8][8]; //Pointer array representing the chess board
        bool turn; //Whose turn it is
        piece* whiteCaptured[16]; //White's captured zone
        piece* blackCaptured[16]; //Black's captured zone
    
    
    
};
#endif /* BoardStructure_hpp */
