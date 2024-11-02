#include "paddle.h"
#include "breakout.cpp"

Paddle::Paddle(Vector2 position, float speed, int width, int height, int score, int lives)
{
    position.x = SCREEN_HEIGHT / 2;
    position.y = SCREEN_WIDTH / 2;
    speed = 2.0f;
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
        position.x -= speed.x;
    if (IsKeyDown(KEY_RIGHT))
        position.x += speed.x;
    if (IsKeyDown(KEY_SPACE))
        Launch();
}


void Paddle::Launch()
{

}


Rectangle Paddle::GetRect()
{
    Rectangle rect;
    rect.x = position.x;
    rect.y = position.y;
    rect.width =width;
    rect.height = height;
}
