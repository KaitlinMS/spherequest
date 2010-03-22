// hud.h
// contains function primitives related to drawing the hud

#ifndef HUD_H
#define HUD_H

#include <stdlib.h>
#include <glut.h>
#include <string.h>

#include <iostream>

#include "player.h"

class HUD {
public:
	HUD(); // Constructor
	~HUD(){}; // Destructor
	void printText(float x, float y, char *string, float r, float g, float b);
	void drawIntroText();
	void printSaveLoadFeedback(bool isSave, bool isSuccessful);
	void drawHUD();
};

#endif