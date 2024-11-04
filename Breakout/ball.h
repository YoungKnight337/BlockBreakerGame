#pragma once

#include "raylib.h"

class Ball
{
    private:
        Vector2 position;
        int ball_speed_x;
        int ball_speed_y;
        int radius;
    public:
        Ball();
        Ball(Vector2 position, int ball_speed_x, int ball_speed_y, int radius);
        ~Ball();
        void Bounce();
        void Draw();
        void Update();

        // [xenobrain] Const accessors prevent modifying values
        Vector2 GetPosition() const { return position; }
        int GetRadius() const { return radius; }
        //Circle GetCirlce()


};
