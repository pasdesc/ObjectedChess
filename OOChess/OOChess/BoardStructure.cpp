//
//  BoardStructure.cpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/8/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#include "BoardStructure.hpp"


Board::Board(){
    
    turn=true;
    winner=-1;
    gameOver=false;
    
    
}

Board::~Board(){
    
}
const Board& Board::operator=(const Board &copy){
    return copy;
}
Board::Board(const Board &copy){
    
}
const Board& Board::operator=(const Board &&copy){
    return copy;
}
Board::Board(const Board &&copy){
    
}
bool Board::getTurn(){
    return this->turn;
}
void Board::movePiece(short int movecoords[]){
  
}
bool Board::checkMove(short int movecoords[]){
    return true;
}
void Board::switchTurn(){
    this->turn=!this->turn;
}
void Board::capturePiece(int x,int y){
    
}
int Board::score(){
    return 0;
}
void Board::gameIsOver(){
    this->gameOver=true;
}
bool Board::isGameOver(){
    return this->gameOver;
}
bool Board::getWinner(){
    switch (this->winner) {
        case 0:
            return false;
        case 1:
            return true;
        default:
            throw std::runtime_error("Game is not over yet");
            
    }
    
}
