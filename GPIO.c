/**
cd /sys/class/gpio
echo 34 > export
cd gpio34_pi13
echo out > direction
echo 1 > value
*/
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "GPIO.h"
int GPIOInitPin(struct GPIO_PIN *pin,int direction){
	FILE *fp;
	DIR *dp;
	char set_value[10];
	char dir_file[40];
	char dir[40];
	fp = fopen("/sys/class/gpio/export","ab");
    sprintf(set_value,"%d",pin->map);
    fwrite(&set_value, sizeof(char), 2, fp);
    fclose(fp);
    sprintf(dir,"/sys/class/gpio/%s",pin->folder);
    dp = opendir(dir);
    if(dp != NULL){
    	sprintf(dir_file,"/sys/class/gpio/%s/direction",pin->folder);
    	fp = fopen(dir_file,"ab");
    	sprintf(set_value,"%s",direction == 0?"out":"in");
    	fwrite(&set_value, sizeof(char), 3, fp);
    	fclose(fp);
    	pin->direction = direction;
    	pin->is_active = 1;
	}
	closedir(dp);
}
int GPIOWritePin(struct GPIO_PIN *pin,int value){
	if(pin->direction != 0)
		return -1;
	else if(!pin->is_active)
		return -2;
	else if(value > HIGH || value < LOW)
		return -3;
	else if(value == pin->value)
		return 1;
	FILE *fp;
	char set_value[10];
	char dir_file[40];
	sprintf(dir_file,"/sys/class/gpio/%s/value",pin->folder);
	fp = fopen(dir_file,"ab");
	sprintf(set_value,"%d",value);
	fwrite(&set_value, sizeof(char), 2, fp);
	fclose(fp);
	pin->value = value;
}
int main(){
	GPIOInitPin(&GPIO_PH7,0);
	GPIOWritePin(&GPIO_PH7,HIGH);
}