//
//  PieceStructure.hpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/9/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#ifndef PieceStructure_hpp
#define PieceStructure_hpp
class Board;
#include <stdio.h>
class Piece{
    public:
        Piece(); //Constructor
        ~Piece(); //Destructor
        Piece(const Piece &copy); // Copy Constructor
        Piece operator=(const Piece &copy); //Assignment operator
        void move(int x, int y); //Call the board's move function if it is a valid move
        bool checkMove(int x, int y); //Check if a move to x,y is valid
        bool inline checkIfCaptured();
    protected:
        bool captured;
    
    
    
    
};
class Castler{
    public:
        Castler(); //Constructor
        ~Castler(); //Destructor
        Castler(const Castler &copy); // Copy Constructor
        Castler operator=(const Castler &copy); //Assignment operator
        bool moved; //Check if piece has moved
    protected:
        bool hasMoved();

    
};
#endif /* PieceStructure_hpp */
