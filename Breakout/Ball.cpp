#include "ball.h"
//#include "block.h"
//#include "paddle.h"

Ball::Ball()
{
}

Ball::Ball(Vector2 position = {100.f, 100.f}, int ball_speed_x = 5, int ball_speed_y = 5, int radius = 15)
    : position(position), ball_speed_x(ball_speed_x), ball_speed_y(ball_speed_y), radius(radius)
{
}

Ball::~Ball() {}

void Ball::Draw()
{
    DrawCircle(static_cast<int>(position.x), static_cast<int>(position.y), static_cast<float>(radius), WHITE);
}

void Ball::Update()
{
    Bounce();
}

void Ball::Bounce()
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
    /*
    if (CheckCollisionCircleRec(position, radius, GetRect()))
    {
        ball_speed_x *= +1;
    }

    if (CheckCollisionCircleRec(position, radius, GetRect()))
    {
        ball_speed_x *= +1;
    }
    */
}
 
