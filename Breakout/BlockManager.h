#pragma once
#include "raylib.h"
#include "Block.h"
#include "vector"

class Block;
class Ball;


class BlockManager
{
	private:
		std::vector<std::vector<Block>>blocks;
	public:
		BlockManager();
		~BlockManager();
		void Initialize(Block& block, int a, int b);
		void Update(Ball& ball, int a, int b);
		void Draw(int a, int b);
		
};

