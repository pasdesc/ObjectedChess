//
//  BoardStructure.hpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/8/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#ifndef vector_included
#define vector_included
#include <vector>
#endif
#ifndef BoardStructure_hpp
#define BoardStructure_hpp

#include "PieceStructure.hpp"

class Board{
    public:
        Board(); //Constructor
        virtual ~Board(); //Destructor
        Board(const Board &copy); // Copy Constructor
        virtual const Board& operator=(const Board &copy); //Assignment operator
        Board(const Board &&copy);
        virtual const Board& operator=(const Board &&copy);
        virtual bool getTurn(); //Check whose turn it is
        virtual void movePiece(short int x1, short int y1, short int x2, short int y2); //Move a piece from (x1,y1) to (x2,y2)
        virtual void switchTurn(); //Switch the turn
        virtual void capturePiece(int x,int y); //Move a piece to the captured zone off of the board
        virtual int score(const Board &scored); //Score a board
        virtual bool isGameOver();
        virtual void gameIsOver();
        virtual bool getWinner();
    
    protected:
        std::vector<std::vector<std::shared_ptr<Piece>>> mainBoard; //Vector array representing the chess board
        bool gameOver;
        char winner;
        bool turn; //Whose turn it is
        std::vector<Piece> whiteCaptured; //White's captured zone
        std::vector<Piece> blackCaptured; //Black's captured zone
    
    
    
};
#endif /* BoardStructure_hpp */
