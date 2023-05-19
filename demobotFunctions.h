#include <kipr/wombat.h>
// Left motor port - 3
// Right motor port - 0
int clawArm = 0;
int clawHand = 2;

void driveForward(float x, float y){
    y = y * 1000;
    motor(0, x);
    motor(3, x);
    msleep(y);
}
