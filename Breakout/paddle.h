#include "raylib.h"

class Paddle
{
private:
    Vector2 position;
    float speed;
    int width, height;
    int score;
    int lives;
    Color color;
public:
    Paddle(Vector2 position, float speed, int width, int height, int score, int lives);
    ~Paddle();
    void Draw();
    void Update();
    void Launch();
    Rectangle GetRect();
};