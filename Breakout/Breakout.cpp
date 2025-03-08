#include <iostream>
#include "raylib.h"
#include "ball.h"
#include "block.h"
#include "paddle.h"
#include "BlockManager.h"

// [xenobrain] Screen dimensions as a static constexpr
// means the values is set at compile time and has internal linkage (won't leak into other files)


int main() 
{
    static constexpr int SCREEN_WIDTH = 800;
    static constexpr int SCREEN_HEIGHT = 450;
    static constexpr int FRAME_RATE = 60;
    static constexpr int BRICK_ROW = 5;
    static constexpr int BRICK_COL = 10;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(FRAME_RATE);

    // [xenobrain] Declare an instance of the classes
    Paddle paddle;
    Ball ball;
    Block block;
    Block blocks[BRICK_ROW][BRICK_COL];
    BlockManager blockManager;

    blockManager.Initialize(block,BRICK_ROW, BRICK_COL);
    
    while (WindowShouldClose() == false) 
    { 
        paddle.Update();
        ball.Update(paddle, block);
        blockManager.Update(ball, BRICK_ROW, BRICK_COL);
        
        
        
        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        paddle.Draw();

        blockManager.Draw(BRICK_ROW, BRICK_COL);
        
        EndDrawing();
    }

    CloseWindow();
}
