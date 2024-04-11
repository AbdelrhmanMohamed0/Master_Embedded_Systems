//Abdelrhman Ellawendi
#include <stdint.h>

typedef volatile unsigned int vuint32_t;

//RCC
#define RCC_BASE        0x40021000
#define RCC_APB2ENR    *(volatile uint32_t *) (RCC_BASE + 0x18)
#define RCC_IOPAEN      (1<<2)

//GPIO
#define GPIOA_BASE      0x40010800
#define GPIOA_CRH      *(volatile uint32_t *) (GPIOA_BASE + 0x4)
#define GPIOA_CRL      *(volatile uint32_t *) (GPIOA_BASE + 0x00)
#define GPIOA_ODR      *(volatile uint32_t *) (GPIOA_BASE + 0x0c)
#define GPIOA13         (1UL<<13)

//EXTI
#define EXTI_BASE      0x40010400
#define EXTI_IMR      *(volatile uint32_t *) (EXTI_BASE + 0x00)
#define EXTI_RTSR     *(volatile uint32_t *) (EXTI_BASE + 0x08)
#define EXTI_PR       *(volatile uint32_t *) (EXTI_BASE + 0x14)

//AFIO
#define AFIO_BASE       0x40010000
#define AFIO_EXTICR1   *(volatile uint32_t *) (AFIO_BASE + 0x08)

#define NVIC_EXTIE0    *(volatile uint32_t *) (0xE000E100)

//void EXTI0_IRQHandler (void);

void clock_init()
{
	//Enable clock GPIOA
	RCC_APB2ENR |= RCC_IOPAEN ;

	//Bit 0 AFIOEN: alternative function I/O clock enable
	RCC_APB2ENR |= (1<<0) ;
}
void GPIO_init()
{
	//pin13 port A output
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;

	//Pin A0 : floating input (reset state)
	GPIOA_CRL |= (1<<2);
}

int main(void)
{
	clock_init();
	GPIO_init();

	// EXTI0 configuration x = 0 to portA0
	AFIO_EXTICR1 = 0 ;

	//Enable rising trigger
	EXTI_RTSR |= (1<<0);

	//Enable EXTI Line 0 (mask 1)
	EXTI_IMR |= (1<<0);

	// Enable NVIC IRQ6 >>> EXTI0
	NVIC_EXTIE0 |= (1<<6);

	while (1);

}

void EXTI0_IRQHandler (void)
{
	//IRQ is happened ETI0 >>> PORTA pin0 rising edge
	// toggle led portA pin13
	GPIOA_ODR ^= (1<<13) ;


    // Clear Pending Request For Line 1
	EXTI_PR |= (1<<0) ;
}
