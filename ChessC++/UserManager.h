#pragma once
#include "Board.h"

class UserManager
{
private:
	Board* board;

public:
	UserManager(Board* board);

public:
	void Update(Window* window);

private:
	void ClickPiece(Window* window);

	SDL_Rect test;
};
