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
        for (int j = 0; j < b; j++)
        {
            blocks[i][j].position.x =  static_cast<float>(j) * block.GetWidth() + block.GetWidth() / 2;
            blocks[i][j].position.y = static_cast<float>(i) * block.GetHeight() + block.GetHeight() / 2 + initialDownPosition;
        }
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