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
        virtual ~Piece(); //Destructor
        Piece(const Piece &copy); // Copy Constructor
        virtual Piece operator=(const Piece &copy); //Assignment operator
        virtual void move(int x, int y); //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y); //Check if a move to x,y is valid
        virtual bool inline checkIfCaptured();
    protected:
        bool captured;
    
    
    
    
};
class Castler{
    public:
        Castler(); //Constructor
        virtual ~Castler(); //Destructor
        Castler(const Castler &copy); // Copy Constructor
        virtual Castler operator=(const Castler &copy); //Assignment operator
        virtual bool moved(); //Check if piece has moved
        virtual bool pieceBetween();
    protected:
        bool hasMoved;

    
};

class King: public Piece, public Castler{
    public:
        King(); //Constructor
        virtual ~King(); //Destructor
        King(const King &copy); // Copy Constructor
        virtual King operator=(const King &copy); //Assignment operator
    
    
};

class Rook: public Piece, public Castler{
    public:
        Rook(); //Constructor
        virtual ~Rook(); //Destructor
        Rook(const Rook &copy); // Copy Constructor
        virtual Rook operator=(const Rook &copy); //Assignment operator

    
    
};

class Pawn: public Piece{
    public:
        Pawn(); //Constructor
        virtual ~Pawn(); //Destructor
        Pawn(const Pawn &copy); // Copy Constructor
        virtual Pawn operator=(const Pawn &copy); //Assignment operator

    
    
};
class Knight: public Piece{
    public:
        Knight(); //Constructor
        virtual ~Knight(); //Destructor
        Knight(const Knight &copy); // Copy Constructor
        virtual Knight operator=(const Knight &copy); //Assignment operator

    
    
};
class Queen: public Piece{
    public:
        Queen(); //Constructor
        virtual ~Queen(); //Destructor
        Queen(const Queen &copy); // Copy Constructor
        virtual Queen operator=(const Queen &copy); //Assignment operator
 
    
    
};
class Bishop: public Piece{
    public:
        Bishop(); //Constructor
        virtual ~Bishop(); //Destructor
        Bishop(const Bishop &copy); // Copy Constructor
        virtual Bishop operator=(const Bishop &copy); //Assignment operator

    
    
};
#endif /* PieceStructure_hpp */