#include "block.h"
#include "Ball.h" 

//Default Constructor

Block::Block()
 :position{position.x,position.y}, active {true}, width {80}, height {20}, value {1}, color {YELLOW}
{

}


//Parameter Constructor
Block::Block(Vector2 position, int width = 80, int height = 20, int value = 1, bool active = true, Color color = YELLOW)
    :position{position}, active {active}, width {width}, height {height}, value {value}, color {color}
{

}

Block::~Block(){}

void Block::Draw()
{
    if (active)
    {
        DrawRectangle(static_cast<int>(position.x), static_cast<int>(position.y), width, height, color);
    }

}

void Block::Update(const Ball& ball)
{
    if (active)
    {
        if (CheckCollisionCircleRec(ball.GetPosition(), static_cast<float>(ball.GetRadius()), GetRect()))
        {
            active = false;
        }
    }
}
Rectangle Block::GetRect()
{
        return{position.x,position.y, static_cast<float>(width), static_cast<float>(height) };
}




