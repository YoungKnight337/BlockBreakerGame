#include "raylib.h"

class Ball
{
    private:
        Vector2 position;
        int ball_speed_x;
        int ball_speed_y;
        int radius;
    public:
        Ball(Vector2 position, int ball_speed_x, int ball_speed_y, int radius);
        ~Ball();
        void Bounce();
        void Draw();
        void Update();

        //Circle GetCirlce()


};
