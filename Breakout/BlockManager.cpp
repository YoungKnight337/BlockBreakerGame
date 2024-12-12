#include "BlockManager.h"

BlockManager::BlockManager()
{

}

BlockManager::~BlockManager()
{

}

void BlockManager::Initialize()
{
    for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
        {
            blocks[i][j].position = (Vector2){  j * width + wdith / 2,i * height + height / 2 };
        }
    }
}

void BlockManager::Draw()
{
    for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
        {
            blocks[i][j].Draw();
        }
    }
}

void BlockManager::Update(Ball& ball)
{
    for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
        {
            blocks[i][j].Update(ball);
        }
    }
}