#include "BlockManager.h"

BlockManager::BlockManager()
{
    
}

BlockManager::~BlockManager()
{

}

void BlockManager::Initialize(Block& block,int a, int b)
{
    initialDownPosition = 50;

    for (int i = 0; i < a; i++)
    {
        std::vector<Block> block_row;

        for (int j = 0; j < b; j++)
        {
            block.position.x = j * (block.GetWidth() + 10) + j ;
            block.position.y = i * (block.GetHeight() + 10) + i ;

            block_row.push_back(block);
        }
        blocks.push_back(block_row);
    }
}

void BlockManager::Draw(int a, int b)
{
    for (std::vector<Block> block_row : blocks)
    {
        for (Block block : block_row)
        {
            block.Draw();
        }
    }
}

void BlockManager::Update(Ball& ball, int a, int b)
{

    for (std::vector<Block>& block_row : blocks)
    {
        for (Block&block: block_row)
        {
            block.Update(ball);
        }
    }
}