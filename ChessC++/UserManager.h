#pragma once
#include "Input.h"
#include "Piece.h"
#include "Board.h"

class UserManager
{
public:
	UserManager();

	void ClickPiece(int tileSize);
	void MovePiece(Piece* clickedPiece, int size, Board* board);

public:
	bool isClicked = false;
	bool canMove = false;
	int clickedX;
	int clickedY;

	int timesClicked = 0;
};

