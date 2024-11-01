#include "ball.h"

Ball::Ball(int ball_x, int ball_y, int ball_speed_x, int ball_speed_y, int ball_radius)
{
    int ball_x = 100;
    int ball_y = 100;
    int ball_speed_x = 5;
    int ball_speed_y = 5;
    int ball_radius = 15;
}

Ball::~Ball(){}

void Ball::Draw()
{ 
    return DrawCircle(ball_x, ball_y, ball_radius, WHITE);
}

void Ball::Update()
{
    ball_x += ball_speed_x;
    ball_y += ball_speed_y;

    if (ball_x + ball_radius >= SCREEN_WIDTH || ball_x - ball_radius <= 0)
    {
        ball_speed_x *= -1;
    }

    if (ball_y + ball_radius >= SCREEN_HEIGHT || ball_y - ball_radius <= 0)
    {
        ball_speed_y *= -1;
    }

    if (CheckCollisionCircleRec(position, radius, Paddle.GetRect())
    {
        ball_speed_x *= -1;
    }
    
    if (CheckCollisionCircleRec(position, radius, Block.GetRect())
    {
        ball_speed_x *= -1;
    }


}