#include "block.h"
#include "Ball.h" 

//Default Constructor

Block::Block()
 :position{}, active {true}, width {50}, height {20}, value {1}, color {YELLOW}
{

}


//Parameter Constructor
Block::Block(Vector2 position, int width = 50, int height = 20, int value = 1, bool active = true, Color color = YELLOW)
    :position{position}, active {active}, width {width}, height {height}, value {value}, color {color}
{
    /*for (int i = 0; i < BRICK_ROW; i++)
    {
        for (int j = 0; j < BRICK_COL; j++)
        {
            blocks[i][j] = Vector2{ static_cast<float>(j) * width + width / 2, static_cast<float>(i) * height + 50 };
            blocks[i][j].isHit = false;
        }
    }
    */
}

Block::~Block(){}

void Block::Draw()
{
    //DrawRectangle(static_cast<float>(position.x), static_cast<float>(position.y), width, height, color);

    if (active = true)
    {
        DrawRectangle(static_cast<float>(position.x), static_cast<float>(position.y), width, height, color);
    }
    

    /*

        for (int i = 0; i < BRICK_ROW; i++)
        {
            for (int j = 0; j < BRICK_COL; j++)
            {
                if (blocks[i][j].isHit = false)
                {
                        DrawRectangle(blocks[i][j].position.x, blocks[i][j].position.y, blocks[i][j].width, blocks[i][j].height, color);
                }
            }
            // [xenobrain] not sure what you're using this for yet but there was misleading indentation by having it under
            // DrawRectagle.  Moved it here and added brackets to make it clear what's going on 
        }
    */
}

void Block::Update(const Ball &ball)
{
    // Check Collision with Ball
    if (CheckCollisionCircleRec(ball.GetPosition(), static_cast<float>(ball.GetRadius()), GetRect()))
    {
        active = false; 
    }
}

Rectangle Block::GetRect()
{
    return{position.x,position.y,float(width), float(height) };

}

