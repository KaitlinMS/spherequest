// maze.h
// contains functions and attributes related to the maze/level

#ifndef MAZE_H
#define MAZE_H

#include <stdlib.h>
#include <glut.h>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "player.h"

#define CELL_SIDE 40.0			//length of one side of a cell on the map grid
#define MAP_SIDE 12				//map is MAP_SIDE x MAP SIDE cells

class maze {
public:
	maze(); // Constructor
	~maze(){}; // Destructor
	void generateMaze();
	int checkMaze(int row, int column);
	void changeLevel(int levelNum);
	void readMaze(const char* fileName);
};

#endif