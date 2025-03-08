#pragma once
#include "paddle.h"
#include "block.h"
#include "math.h"
#include "raylib.h"

// Forward delcare Paddle and Block
class Paddle;
class Block;

class Ball
{
    private:
        Vector2 position;
        int ball_speed_x;
        int ball_speed_y;
        int radius;
        bool isLaunched;
        Color color;
    public:
        Ball();
        Ball(Vector2 position, int ball_speed_x, int ball_speed_y, int radius, Color color);
        ~Ball();
        void Bounce(Paddle &paddle, Block &block);
        void Draw();
        void Update(Paddle& player, Block &block, Ball& ball);
        void Launch();
        void ResetBall();
        // [xenobrain] Const accessors prevent modifying values
        Vector2 GetPosition() const { return position; }
        int GetRadius() const { return radius; }
        //Circle GetCirlce()


};
