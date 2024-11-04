#pragma once

#include "raylib.h"

class Paddle
{
private:
    Vector2 position;
    int width, height;
    int score;
    int lives;
    Color color;
public:
    // [xenobrain] Implement default constructor
    Paddle();
    Paddle(Vector2 position, int width, int height, int score, int lives);
    ~Paddle();
    void Draw();
    void Update();
    void Launch();
    Rectangle GetRect();
};
