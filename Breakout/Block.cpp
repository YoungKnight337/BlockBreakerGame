#include "block.h"

#define BRICK_ROW 8
#define BRICK_COL 12

Block::Block(Vector2 position, int width, int height, int value, bool isHit, Color color)
{
    position.x;
    position.y;
    isHit = false;
    width = 50;
    height = 20;
    value = 1;
    color = YELLOW;
}

Block::~Block() {}

void Block::Draw()
{
    for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
            Block block;
            DrawRectangle(position, width, height, color);
    }
}

void Block::Update()
{
    //Check Collision with Ball
    if (CheckCollisionCircleRec(position, radius, GetRect())
    {
        isHit = true;
        EndDrawing();
    }
}

Rectangle Block::GetRect()
{
    return Rectangle{position.x,position.y,width,height,color };
}