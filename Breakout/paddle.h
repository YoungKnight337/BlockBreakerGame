#include "raylib.h"
#include "breakout.cpp"

class Paddle
{
    private:
        Vector2 position;
        float speed;
        int width, height;
        int score;
        int lives;
    public:
        Paddle(Vector2 position, float speed, int width, int height, int score, int lives);
        ~Paddle();
        void Draw();
        void Update();
        void Launch();
        Rectangle GetRect();
}
