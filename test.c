#include <stdio.h>
#include "GPIO.h"
#define LED &GPIO_PD1
int main(int argc, char ** argv){
        GPIOInitPin(LED,0);
        while(1){
                GPIOWritePin(LED,1);
                usleep(100000);
                GPIOWritePin(LED,0);
                usleep(100000);
        }
        return 0;
}

