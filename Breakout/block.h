#include "raylib.h"
#include "breakout.cpp"

class Block
{
    private:
        Vector2 position;
        bool isHit;
        int width;
        int height;
        int value;
        Color color;

    public:
        Block(Vector2 position, int width, int height, int value, bool isHit, Color colo);
        ~Block();
        void Draw();
        void Update();
        Rectangle GetRect();
}