#pragma once
#include "Board.h"

class BoardManager
{
private:
	Window* window;

public:
	Board* board;
	BoardManager(Window* window);

public:
	void Update();
	void Clear();

private:
	void DrawSquare();

	SDL_Rect sqRect;
};

