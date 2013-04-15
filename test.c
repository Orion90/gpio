#include <stdio.h>
#include "GPIO.h"
int main(int argc, char ** argv){
        GPIOInitPin(&GPIO_PD1,0);
        while(1){
                GPIOWritePin(&GPIO_PD1,1);
                usleep(100000);
                GPIOWritePin(&GPIO_PD1,0);
                usleep(100000);
        }
        return 0;
}

