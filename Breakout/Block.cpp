#include "block.h"
#include "Ball.h" 

//Default Constructor
Block::Block()
 : position {0.f, 0.f}, isHit {false}, width {50}, height {50}, value {1}, color {YELLOW}
{
}

//Parameter Constructor
Block::Block(Vector2 position, int width = 50, int height = 50, int value = 1, bool isHit = false, Color color = YELLOW)
    : position {position}, isHit {isHit}, width {width}, height {height}, value {value}, color {color}
{
}

Block::~Block(){}

void Block::Draw()
{
    for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
        {
            DrawRectangle(static_cast<int>(position.x), static_cast<int>(position.y), width, height, color);
        }
        // [xenobrain] not sure what you're using this for yet but there was misleading indentation by having it under
        // DrawRectagle.  Moved it here and added brackets to make it clear what's going on 
    }
}

void Block::Update(const Ball &ball)
{
    // Check Collision with Ball
    if (CheckCollisionCircleRec(ball.GetPosition(), static_cast<float>(ball.GetRadius()), GetRect()))
    {
        isHit = true; 
    }
}
void Block::Destroy()
{
    if (isHit = true)
    {

    }
}
Rectangle Block::GetRect()
{
    return{position.x,position.y,float(width), float(height) };

}

