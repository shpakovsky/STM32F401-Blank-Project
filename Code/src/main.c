#include "stm32f4xx.h"

void GPIO_Init(void);

int main(void)
{
	GPIO_Init();
	while(1){}
}

void GPIO_Init(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	
	/* Turn on green LED */
	GPIOD->MODER |= GPIO_MODER_MODER12_0;
	GPIOD->OTYPER |= 0;
	GPIOD->OSPEEDR |= 0;
	GPIOD->PUPDR |= 0;
	GPIOD->ODR |= GPIO_ODR_ODR_12;
}
