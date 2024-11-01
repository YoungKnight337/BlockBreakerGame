#include <iostream>

#include "raylib.h"
#include "ball.h"
#include "block.h"
#include "paddle.h"

using namespace std;

int main() 
{

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 450;


    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(60);

    while (WindowShouldClose() == false) 
    {
        Paddle::Update();
        Ball::Update();
        Block::Update();
        
        
        BeginDrawing();
        ClearBackground(BLACK);

        Ball::Draw();
        Paddle::Draw()
        Block::Draw();
        EndDrawing();
    }

    CloseWindow();
}