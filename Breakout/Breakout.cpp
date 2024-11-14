#include <iostream>

#include "raylib.h"
#include "ball.h"
#include "block.h"
#include "paddle.h"

using namespace std;

// [xenobrain] Screen dimensions as a static constexpr
// means the values is set at compile time and has internal linkage (won't leak into other files)
static constexpr int SCREEN_WIDTH = 800;
static constexpr int SCREEN_HEIGHT = 450;

int main() 
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(60);

    // [xenobrain] Declare an instance of the classes
    Paddle paddle;
    Ball ball;
    Block block;
    
    while (WindowShouldClose() == false) 
    {
        paddle.Update();
        ball.Update(paddle);
        block.Update(ball);
        
        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        paddle.Draw();
        block.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}