#include "paddle.h"
// [xenobrain] removed breakout.cpp

// [xenobrain] this constructor was implicit before, but it needs to be explicit especially since it has logic

//Default Constructor
Paddle::Paddle() : position{ position.x,position.y },width { 75 }, height{ 20 }, score{ 0 }, lives{ 3 }, color{ GRAY }
{
    // Cast to float to avoid integer division
    position.x = static_cast<float>(GetScreenHeight())* 7/8.f;
    position.y = static_cast<float>(GetScreenWidth()) / 2.f;
}

// [xenobrain] added setters and default values where possible

//Parameter Constructor
Paddle::Paddle(Vector2 position, int width = 75, int height = 20, int score = 0, int lives = 3, Color color =GRAY) 
    : position {position}, width {width}, height {height}, score {score}, lives {lives}, color {color}
{
}

Paddle::~Paddle() {}

void Paddle::Draw()
{
    DrawRectangle(static_cast<int>(position.x), static_cast<int>(position.y), width, height, color);
}

void Paddle::Update()
{
    if (IsKeyDown(KEY_LEFT))
        position.x -= 5;
    if (IsKeyDown(KEY_RIGHT))
        position.x += 5;
    LimitMovement();
}


void Paddle::LimitMovement()
{
    if (position.x <= 0) 
    {
        position.x = 0;
    }
    if (position.x + width >= GetScreenWidth()) 
    {
        position.x = GetScreenWidth() - width;
    }
}

Rectangle Paddle::GetRect()
{
    return {position.x,position.y,float(width), float(height)};
}
