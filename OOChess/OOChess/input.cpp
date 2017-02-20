//
//  input.cpp
//  OOChess
//
//  Created by Pascal Descollonges on 2/19/17.
//  Copyright © 2017 Pascal Descollonges. All rights reserved.
//

#include "input.hpp"

int * getMove(bool turn){
    static int coordinates[2][2];
    int * coorptr=&coordinates[0][0];
    std::string turnColor="";
    if(turn) {
        turnColor="White";
    }
    else{
        turnColor="Black";
    }
    
    
    std::cout<<"It is "+turnColor+"'s turn"<<std::endl;
    std::cout<<"What is the x-coordinate of the piece you want to move?"<<std::endl;
    std::cin>>coordinates[0][0];
    std::cout<<"What is the y-coordinate of the piece you want to move?"<<std::endl;
    std::cin>>coordinates[0][1];
    std::cout<<"What is the x-coordinate of the space you want to move to?"<<std::endl;
    std::cin>>coordinates[1][0];
    std::cout<<"What is the y-coordinate of the space you want to move to?"<<std::endl;
    std::cin>>coordinates[1][1];
    return coorptr;
};
void render(){
    std::string filename = "Rendering.py";
    std::string command = "python ";
    command += filename;
    system(command.c_str());
}
