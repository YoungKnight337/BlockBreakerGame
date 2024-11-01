#include "raylib.h"
#include "paddle.h"

#define GRAY 

Paddle::Paddle(Vector2 position, float speed, int width, int height, int score, int lives)
{
    position.x = SCREEN_HEIGHT / 2;
        position.y = SCREEN_WIDTH / 2;
    speed = 2.0f;
    width = 75;
    height = 20;
    score = 0;
    lives = 3;
}

Paddle::~Paddle() {}

void Paddle::Draw()
{
    DrawRectangle(position.x, position.y, width, height, GREY)
}

void Paddle::Update()
{
    if (isKeyDown(KEY_LEFT))
        position.x -= speed.x;
    if (isKeyDown(KEY_RIGHT))
        position.x += speed.x;
    if (isKeyDown(KEY_SPACE))
        Launch();
}


void Paddle::Launch()
{

}


Rectangle Paddle::GetRect()
{
    return Rectangle{ position.x,position.y,width,height };
}