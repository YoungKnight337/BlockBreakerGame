#pragma once
#include "raylib.h"

class Block;
class Ball;

static constexpr int BRICK_ROW = 8;
static constexpr int BRICK_COL = 12;

class BlockManager
{
	private:
		int initialDownPosition;
	public:
		BlockManager();
		~BlockManager();
		void Initialize();
		void Update(Ball& ball);
		void Draw();
		Block blocks[BRICK_ROW][BRICK_COL];
};

