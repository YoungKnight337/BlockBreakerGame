#pragma once
#include "raylib.h"

// [xenobrain] Forward declare Ball
class Ball;

class Block
{
private:
    //Vector2 position;
    bool active;
    int width;
    int height;
    int value;
    Color color;

public:
    Vector2 position;
    Block();
    Block(Vector2 position, int width, int height, int value, bool active, Color color);
    ~Block();
    void Draw();
    // [xenobrain] Block needs a reference to Ball.  Const reference used so it can't be modified
    void Update(const Ball& ball);
   // void Deactivate(const Ball& ball);
    int GetWidth() const { return width; };
    int GetHeight() const { return height; };
    Rectangle GetRect();
};