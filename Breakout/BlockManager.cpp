#include "BlockManager.h"

BlockManager::BlockManager()
{
    
}

BlockManager::~BlockManager()
{

}

void BlockManager::Initialize(Block& block,int a, int b)
{
    int initialDownPosition = 50;

    for (int i = 0; i < a; i++)
    {
        std::vector<Block> block_row;
        for (int j = 0; j < b; j++)
        {
            block.position.x = j * block.GetHeight() / 2;
            block.position.y = i * block.GetWidth() / 2 + initialDownPosition;

            block_row.push_back(block);
        }
          
        blocks.push_back(block_row);
    }
}

void BlockManager::Draw(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            blocks[i][j].Draw();
        }
    }
}

void BlockManager::Update(Ball& ball, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            blocks[i][j].Update(ball);
        }
    }
}