#include "paddle.h"
// [xenobrain] removed breakout.cpp

// [xenobrain] this constructor was implicit before, but it needs to be explicit especially since it has logic
Paddle::Paddle() : width {75}, height {20}, score {0}, lives {3}
{
    // Cast to float to avoid integer division
    position.x = static_cast<float>(GetScreenHeight()) / 2.f;
    position.y = static_cast<float>(GetScreenWidth()) / 2.f;
    color = GRAY; 
}

// [xenobrain] added setters and default values where possible
Paddle::Paddle(Vector2 position, int width = 75, int height = 20, int score = 0, int lives = 3) :
    position {position}, width {width}, height {height}, score {score}, lives {lives}
{
    color = GRAY;
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
    if (IsKeyDown(KEY_SPACE))
        Launch();
}


void Paddle::Launch()
{

}


Rectangle Paddle::GetRect()
{
    return { position.x,position.y,float(width), float(height) };
    //rect.x = position.x;
    //rect.y = position.y;
    //rect.width = width;
    //rect.height = height;
}
