#include "ball.h"
#include "block.h"
#include "paddle.h"

Ball::Ball(Vector2 position, int ball_speed_x, int ball_speed_y, int radius)
{
    position.x = 100;
    position.y = 100;
    int ball_speed_x = 5;
    int ball_speed_y = 5;
    int radius = 15;
}

Ball::~Ball() {}

void Ball::Draw()
{
    DrawCircle(position.x, position.y, radius, WHITE);
}

void Ball::Update()
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

    if (CheckCollisionCircleRec(position, radius, Rectangle Paddle))
    {
        ball_speed_x *= +1;
    }

    else if (CheckCollisionCircleRec(position, radius, Block.GetRect()))
    {
        ball_speed_x *= +1;
    }
    
}

 
