#pragma once

#include "raylib.h"

class Paddle;

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
        Ball(Vector2 position, int ball_speed_x, int ball_speed_y, int radius,Color color);
        ~Ball();
        void Bounce(const Paddle &paddle);
        void Draw();
        void Update();
        void Launch();
        // [xenobrain] Const accessors prevent modifying values
        Vector2 GetPosition() const { return position; }
        int GetRadius() const { return radius; }
        //Circle GetCirlce()


};
