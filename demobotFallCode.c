#include <kipr/wombat.h>
#include <stdio.h>

#define clawArm 0
#define clawHand 2
#define leftM 0
#define rightM 3

int measure(){
    while (digital(0) ==0){
        motor(leftM, 25);
        motor(rightM, 25);
    }
}

int main()
{
    
    return 0;
}
