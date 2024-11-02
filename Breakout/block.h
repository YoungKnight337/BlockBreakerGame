#include "raylib.h"

class Block
{
private:
    Vector2 position;
    bool isHit;
    int width;
    int height;
    int value;
    Color color;
    const int BRICK_ROW =8;
    const int BRICK_COL =12;
public:
    Block(Vector2 position, int width, int height, int value, bool isHit, Color colo);
    ~Block();
    void Draw();
    void Update();
    Rectangle GetRect();
};