#include "ball.h"
#include "paddle.h"
#include "block.h"
//#include "block.h"


//Default Constructor
Ball::Ball() 
    : position{position.x,position.y}, ball_speed_x{ 5 }, ball_speed_y{ 5 }, radius{ 7 }, color{ WHITE }
{
    position.x = static_cast<float>(GetScreenHeight()) * 7 / 8 - 30.f;
    position.y = static_cast<float>(GetScreenWidth()) / 2.f;
    isLaunched = false;
}

//Paramter Constructor
Ball::Ball(Vector2 position, int ball_speed_x = 5, int ball_speed_y = 5, int radius = 7, Color color = WHITE)
    :position {position}, ball_speed_x {ball_speed_x}, ball_speed_y {ball_speed_y}, radius {radius}, color {color}
{
    isLaunched = false;
}

Ball::~Ball() {}

void Ball::Draw()
{
    DrawCircle(static_cast<int>(position.x), static_cast<int>(position.y), static_cast<float>(radius), color);
}

void Ball::Update(Paddle &player,  Block &block)
{

    if (!isLaunched)
    {
        if ((IsKeyDown(KEY_SPACE)))
        {
            isLaunched = true;
            Launch();
        }
    }
    else
    {
        Bounce(player,block);
    }
}
void Ball::Bounce(Paddle &paddle, Block &block)
{
    position.x += ball_speed_x;
    position.y += ball_speed_y;

    if (position.x + radius >= GetScreenWidth() || position.x - radius <= 0)
    {
        ball_speed_x *= -1;
    }

    if (position.y + radius >= GetScreenHeight() || position.y - radius <= 0)
    {
        ball_speed_y *= -1;
    }

    // [xenobrain] Commented this section out for now because it's incomplete.  Needs to check collision with each block
    
    if (CheckCollisionCircleRec(position, static_cast<float>(GetRadius()),paddle.GetRect()))
    {
        if (ball_speed_y > 0)
        {
            ball_speed_y *= -1;
            ball_speed_x = -1; //(position.x - (paddle.GetRect()/2);
        }
    }
    
    if (CheckCollisionCircleRec(position, static_cast<float>(GetRadius()), block.GetRect()))
    {
        ball_speed_y *= -1;
        //ball_speed_x = -1;
    }
    
}

void Ball::Launch()
{
    if (isLaunched = true)
    {
        ball_speed_x = 0;
        ball_speed_y = -5;
    }
}
 
void Ball::ResetBall()
{
    position.x = static_cast<float>(GetScreenHeight()) * 7 / 8 - 30.f;
    position.y = static_cast<float>(GetScreenWidth()) / 2.f;
    isLaunched = false;
}
