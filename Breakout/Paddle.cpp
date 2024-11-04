#include "paddle.h"
#include "breakout.cpp"

Paddle::Paddle(Vector2 position, int width, int height, int score, int lives)
{
    position.x = GetScreenHeight() / 2;
    position.y = GetScreenWidth() / 2;
    width = 75;
    height = 20;
    score = 0;
    lives = 3;
    color = GRAY;
}

Paddle::~Paddle() {}

void Paddle::Draw()
{
    DrawRectangle(position.x, position.y, width, height, color);
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
