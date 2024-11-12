#pragma once

#include "raylib.h"

// [xenobrain] Forward declare Ball
class Ball;

class Block
{
private:
    Vector2 position;
    bool isHit;
    int width;
    int height;
    int value;
    Color color;
    const int BRICK_ROW = 8;
    const int BRICK_COL = 12;
public:
    Block();
    Block(Vector2 position, int width, int height, int value, bool isHit, Color color);
    ~Block();
    void Draw();
    // [xenobrain] Block needs a reference to Ball.  Const reference used so it can't be modified
    void Update(const Ball &ball);
    Rectangle GetRect();
};