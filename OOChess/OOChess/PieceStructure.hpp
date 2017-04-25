//
//  PieceStructure.hpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/9/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//
#ifndef memory
#define memory
#include <memory>
#endif
#ifndef PieceStructure_hpp
#define PieceStructure_hpp
#include <exception>
class Board;
class Piece{
    public:
        Piece(); //Constructor
        Piece(Board* parent); //Constructor
        virtual ~Piece(); //Destructor
        Piece(const Piece &copy); // Copy Constructor
        virtual Piece operator=(const Piece &copy); //Assignment operator
        virtual void move(int x, int y); //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y); //Check if a move to x,y is valid
        virtual bool inline checkIfCaptured(); //Return the captured
        virtual void transferPiece(int x, int y); //Moves piece data from to another spot on the board
        virtual void capturePiece(); //Moves itself to the captured zone
        virtual bool checkIfSpotDangerous(int x, int y);
        virtual void setParent(std::shared_ptr<Board> parent);
    
    
    protected:
        bool inDanger;
        bool captured;
        std::shared_ptr<Board> parent;
    
    
  
    
    
};

class King: public Piece{
    public:
        King(); //Constructor
        King(Board* parent); //Constructor
        virtual ~King(); //Destructor
        King(const King &copy); // Copy Constructor
        virtual King operator=(const King &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid
    
    
};

class Rook: public Piece{
    public:
        Rook(); //Constructor
        Rook(Board* parent); //Constructor
        virtual ~Rook(); //Destructor
        Rook(const Rook &copy); // Copy Constructor
        virtual Rook operator=(const Rook &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid
    

    
    
};

class Pawn: public Piece{
    public:
        Pawn(); //Constructor
        Pawn(Board* parent); //Constructor
        virtual ~Pawn(); //Destructor
        Pawn(const Pawn &copy); // Copy Constructor
        virtual Pawn operator=(const Pawn &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid


    
    
};
class Knight: public Piece{
    public:
        Knight(); //Constructor
        Knight(Board* parent); //Constructor
        virtual ~Knight(); //Destructor
        Knight(const Knight &copy); // Copy Constructor
        virtual Knight operator=(const Knight &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid
 

    
    
};
class Queen: public Piece{
    public:
        Queen(); //Constructor
        Queen(Board* parent); //Constructor
        virtual ~Queen(); //Destructor
        Queen(const Queen &copy); // Copy Constructor
        virtual Queen operator=(const Queen &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid
    
 
    
    
};
class Bishop: public Piece{
    public:
        Bishop(); //Constructor
        Bishop(Board* parent); //Constructor
        virtual ~Bishop(); //Destructor
        Bishop(const Bishop &copy); // Copy Constructor
        virtual Bishop operator=(const Bishop &copy); //Assignment operator
        virtual void move(int x, int y) override; //Call the board's move function if it is a valid move
        virtual bool checkMove(int x, int y) override; //Check if a move to x,y is valid


    
    
};

#endif /* PieceStructure_hpp */
