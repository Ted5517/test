#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "motor.h"
#include "Key.h"

int8_t speed;
uint8_t Keynum;

int main(void)
{
	OLED_Init();
	Motor_Init();
	while(1){	

	Motor_SetSpeed(99);

}


}

