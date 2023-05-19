#include <kipr/wombat.h>
#include <stdio.h>

void measure(){
    clear_motor_position_counter(0);
    while (digital(0) == 0){
        motor(0, 25);
        motor(3, 25);
    }
    printf(get_motor_positon_counter(0));
}

int main()
{
    measure();
    return 0;
}
