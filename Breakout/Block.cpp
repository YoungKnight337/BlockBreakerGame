#include "block.h"
#include "Ball.h" 

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
            DrawRectangle(position.x,position.y, width, height, color);
            GetRect();
    }
}

void Block::Update()
{
    //Check Collision with Ball
    if (CheckCollisionCircleRec(Ball.position, Ball.radius, GetRect()))
    {
        isHit = true;
        EndDrawing();
    }
}

Rectangle Block::GetRect()
{
    Rectangle rect;
    rect.x = position.x;
    rect.y = position.y;
    rect.width= height;
    rect.height = height;
}