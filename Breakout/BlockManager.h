#pragma once
#include "raylib.h"
#include "Block.h"
#include "vector"


//Forward declare Block and Ball
class Block;
class Ball;


class BlockManager
{
	private:
		//Had to use vectors as a data structure for Bricks as opposed to 2D array
		std::vector<std::vector<Block>>blocks;
		//int initialDownPosition;
	public:
		BlockManager();
		~BlockManager();
		void Initialize(Block& block, int a, int b);
		void Draw(int a, int b);
		void Update(Ball& ball, int a, int b);
		
};

