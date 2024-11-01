#include "raylib.h"
#include "breakout.cpp"


class Ball
{
    private:
        int ball_x;
        int ball_y;
        int ball_speed_x;
        int ball_speed_y;
        int ball_radius;
    public:
        Ball(int ball_x,int ball_y, int ball_speed_x, int ball_speed_y, int ball_radius);
        ~Ball();
        void Draw();
        void Update();



};
