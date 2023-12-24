// Abdelrhman Ellawendi
// Learn-in-depth

#include <stdint.h>

typedef volatile unsigned int vunit32_t;

// register address
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800
#define RCC_APB2ENR *(vunit32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH *(vunit32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR *(vunit32_t *)(GPIOA_BASE + 0x0c)

// bit fields
#define RCC_IOPAEN (1 << 2)
typedef union
{
    vunit32_t all_fields;
    struct
    {
        vunit32_t reserved : 13;
        vunit32_t p_13 : 1;
    } PIN;

} R_ODR_t;

volatile R_ODR_t *R_ODR = (volatile R_ODR_t *)(GPIOA_BASE + 0x0c);

void main(void)
{
    RCC_APB2ENR |= RCC_IOPAEN;
    GPIOA_CRH &= 0xff0fffff;
    GPIOA_CRH |= 0x00200000;
    uint32_t i= 0;
    while (1)
    {
        R_ODR->PIN.p_13 = 1;
        for (i = 0; i < 9000; i++)
            ;
        R_ODR->PIN.p_13 = 0;
        for (i = 0; i < 9000; i++)
            ;
    }
}